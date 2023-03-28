#include "addrecord.h"
#include "ui_addrecord.h"

addrecord::addrecord(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addrecord)
{
    ui->setupUi(this);

    ui->dateEdit->setDate(QDate::currentDate());

    QSqlQuery* query = new QSqlQuery();
    query->exec("SELECT name FROM category");
    while(query->next())
    {
        ui->comboBox->addItem(query->value(0).toString());
    }

    postcombo = 0;
}

addrecord::~addrecord()
{
    delete ui;
}

void addrecord::on_pushButton_clicked()
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("INSERT INTO Product(name,category,picadr,dat,catID) VALUES(:name, :category, :picadr, :dat, :catID)");
    query->bindValue(":name", ui->lineEdit->text());
    query->bindValue(":category", ui->comboBox->itemText(postcombo));
    query->bindValue(":picadr", imageadr);
    query->bindValue(":dat", ui->dateEdit->text());

    QSqlQuery* query_catID = new QSqlQuery();
    query_catID->exec("SELECT * FROM category");
    while(query_catID->next())
    {
        if(query_catID->value(0).toString() == ui->comboBox->itemText(postcombo))
        {
            query->bindValue(":catID", query_catID->value(1).toInt());
        }
    }

    QMessageBox* mess = new QMessageBox;
    if(!query->exec())
    {
        mess->setText("Запрос составлен неверно");
        mess->show();
    }

    emit refresh_table();
}

void addrecord::on_toolButton_clicked()
{
    imageadr = QFileDialog::getOpenFileName(0, "Открыть изображение", "./", "*.jpg");
    ui->label_3->setScaledContents(true);
    ui->label_3->setPixmap(QPixmap(imageadr));
}


void addrecord::on_comboBox_currentIndexChanged(int index)
{
    postcombo = index;
    QSqlQuery* query = new QSqlQuery();
    query->exec("SELECT * FROM category");
    while(query->next())
    {
        if(query->value(0).toString() == ui->comboBox->itemText(postcombo))
        {
            ui->lineEdit_2->setText(query->value(1).toString());
        }
    }
}

