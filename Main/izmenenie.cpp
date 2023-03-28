#include "izmenenie.h"
#include "ui_izmenenie.h"

izmenenie::izmenenie(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::izmenenie)
{
    ui->setupUi(this);

    QSqlQuery* query = new QSqlQuery();
    query->exec("SELECT name FROM category");
    while(query->next())
    {
        ui->comboBox->addItem(query->value(0).toString());
    }

    postcombo = 0;
}

izmenenie::~izmenenie()
{
    delete ui;
}

void izmenenie::obr_sendID(int a)
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("SELECT Name, Category, dat FROM Product WHERE id=?");
    query->bindValue(0, a);

    if(query->exec())
    {
        query->next();
        ui->lineEdit->setText(query->value(0).toString());

        for(int i = 0; i < ui->comboBox->count(); i++)
        {
            if(ui->comboBox->itemText(i) == query->value(1).toString())
            {
                ui->comboBox->setCurrentIndex(i);
                break;
            }
        }

        ui->lineEdit_3->setText(QString::number(a));
        ui->dateEdit->setDate(QDate(query->value(2).toDate()));
    }
}

void izmenenie::on_pushButton_clicked()
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("UPDATE Product SET name=?, category=?, dat=?, catID=? WHERE id=?");
    query->bindValue(0, ui->lineEdit->text());
    query->bindValue(1, ui->comboBox->currentText());
    query->bindValue(2, ui->dateEdit->text());
    query->bindValue(3, ui->lineEdit_2->text());
    query->bindValue(4, ui->lineEdit_3->text().toInt());

    if(query->exec())
    {
        upd_table();
    }
}


void izmenenie::on_comboBox_currentIndexChanged(int index)
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

