#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableView->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->tableView, SIGNAL(customContextMenuRequested(QPoint)), SLOT(CustomMenuReq(QPoint)));
    fl = 0;
    comb = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_triggered()
{
    logwin = new login();
    logwin-> show();
    QSqlQuery* query = new QSqlQuery();
    query->exec("SELECT name FROM category");
    while(query->next())
    {
        ui->comboBox->addItem(query->value(0).toString());
    }
}


void MainWindow::on_pushButton_clicked()
{
    fl = 1;
    model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM Product");

    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "Название");
    model->setHeaderData(2, Qt::Horizontal, "Категория");
    model->setHeaderData(3, Qt::Horizontal, "Изображение");
    model->setHeaderData(4, Qt::Horizontal, "Дата поставки");
    model->setHeaderData(5, Qt::Horizontal, "ID категории");

    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();

    if(comb == 0)
    {
        QSqlQuery* query = new QSqlQuery();
        query->exec("SELECT name FROM category");
        while(query->next())
        {
            ui->comboBox->addItem(query->value(0).toString());
        }
        comb = 1;
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    dopzap = new addrecord();
    connect(dopzap, SIGNAL(refresh_table()), this, SLOT(obr_ref_table()));
    dopzap->show();
}

void MainWindow::obr_ref_table()
{
    on_pushButton_clicked();
}

void MainWindow::on_pushButton_3_clicked()
{
    show_table = new showtable();
    show_table->show();
}


void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    int temp_num;
    temp_num = ui->tableView->model()->data(ui->tableView->model()->index(index.row(),0)).toInt();

    ui->lineEdit->setText(QString::number(temp_num));

    QSqlQuery* query = new QSqlQuery();
    query->prepare("SELECT name, category, picadr, dat, catID FROM Product WHERE id=:id");
    query->bindValue(":id", temp_num);

    if(query->exec())
    {
        query->next();
        ui->lineEdit_2->setText(query->value(0).toString());

        for(int i = 0; i < ui->comboBox->count(); i++)
        {
            if(ui->comboBox->itemText(i) == query->value(1).toString())
            {
                ui->comboBox->setCurrentIndex(i);
                break;
            }
        }

        ui->label_4->setScaledContents(true);
        ui->label_4->setPixmap(QPixmap(query->value(2).toString()));

        ui->dateEdit->setDate(QDate(query->value(3).toDate()));

        ui->lineEdit_3->setText(query->value(4).toString());
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("UPDATE Product SET name=?, category=?, dat=?, catID=? WHERE id=?");
    query->bindValue(0, ui->lineEdit_2->text());
    query->bindValue(1, ui->comboBox->currentText());
    query->bindValue(2, ui->dateEdit->text());
    query->bindValue(3, ui->lineEdit_3->text());
    query->bindValue(4, ui->lineEdit->text());

    if(query->exec())
    {
        on_pushButton_clicked();
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("DELETE FROM Product WHERE id=?");
    query->bindValue(0, ui->lineEdit->text());

    if(query->exec())
    {
        on_pushButton_clicked();
    }
}

void MainWindow::CustomMenuReq(QPoint pos)
{
    if(fl == 1)
    {
        QModelIndex index = ui->tableView->indexAt(pos);
        globid = ui->tableView->model()->data(ui->tableView->model()->index(index.row(),0)).toInt();

        QMenu* menu = new QMenu(this);
        QAction* izm = new QAction("Изменить", this);
        QAction* del = new QAction("Удалить", this);

        connect(izm, SIGNAL(triggered()), this, SLOT(izm_zap()));
        connect(del, SIGNAL(triggered()), this, SLOT(del_zap()));

        menu->addAction(izm);
        menu->addAction(del);
        menu->popup(ui->tableView->viewport()->mapToGlobal(pos));
    }
}

void MainWindow::del_zap()
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("DELETE FROM Product WHERE id=?");
    query->bindValue(0, globid);

    if(query->exec())
    {
        on_pushButton_clicked();
    }
}

void MainWindow::izm_zap()
{
    izm = new izmenenie();
    connect(this, SIGNAL(sendID(int)), izm, SLOT(obr_sendID(int)));
    emit sendID(globid);
    connect(izm, SIGNAL(upd_table()), this, SLOT(on_pushButton_clicked()));
    izm->show();

    disconnect(this, SIGNAL(sendID(int)), izm, SLOT(obr_sendID(int)));
}

void MainWindow::on_pushButton_6_clicked()
{
    pechat = new print();
    pechat->show();
}

void MainWindow::on_pushButton_7_clicked()
{
    QString str;
    str.append("<html><meta http-equiv='Content-Type' content='text/html; charset=utf-8'><head></head><body><center>"+QString("Пример создания отчета"));
    str.append("<table border=1><tr>");
    str.append("<td>"+QString("ID")+"</td>");
    str.append("<td>"+QString("Название")+"</td>");
    str.append("<td>"+QString("Категория")+"</td></tr>");

    QSqlQuery* query = new QSqlQuery();
    query->exec("SELECT id, name, category FROM Product");

    while(query->next())
    {
        str.append("<tr><td>");
        str.append(query->value(0).toString());
        str.append("</td><td>");
        str.append(query->value(1).toString());
        str.append("</td><td>");
        str.append(query->value(2).toString());
        str.append("</td></tr>");
    }
    str.append("</table></center></body></html>");

    QPrinter printer;
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPageOrientation(QPageLayout::Portrait);
    printer.setPageSize(QPageSize::A4);

    QString path = QFileDialog::getSaveFileName(NULL, "Сохранить в PDF", "Отчет", "PDF");
    if(path.isEmpty()) return;

    printer.setOutputFileName(path);

    QTextDocument doc;
    doc.setHtml(str);
    doc.print(&printer);
}


void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    postcombo = index;
    QSqlQuery* query = new QSqlQuery();
    query->exec("SELECT * FROM category");
    while(query->next())
    {
        if(query->value(0).toString() == ui->comboBox->itemText(postcombo))
        {
            ui->lineEdit_3->setText(query->value(1).toString());
        }
    }
}


void MainWindow::on_action_2_triggered()
{
    pg = new printgraf();
    pg->show();
}

