#include "print.h"
#include "ui_print.h"

print::print(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::print)
{
    ui->setupUi(this);
}

print::~print()
{
    delete ui;
}

void print::on_pushButton_clicked()
{
    ui->lineEdit->setText(QFileDialog::getOpenFileName(0, "Выберите файл", "./"));
}


void print::on_pushButton_2_clicked()
{
    QFile* file = new QFile();
    file->setFileName(ui->lineEdit->text());
    file->open(QIODevice::OpenMode());

    QTextStream in(file);
    in<<"<html><meta http-equiv='Content-Type' content='text/html; charset=utf-8'><head></head><body><center>"+QString("Пример создания отчета");
    in<<"<table border=1><tr>";
    in<<"<td>"+QString("ID")+"</td>";
    in<<"<td>"+QString("Название")+"</td>";
    in<<"<td>"+QString("Категория")+"</td></tr>";

    QSqlQuery* query = new QSqlQuery();
    query->exec("SELECT * FROM Product");

    while(query->next())
    {
        in<<"<tr><td>";
        in<<query->value(0).toString();
        in<<"</td><td>";
        in<<query->value(1).toString();
        in<<"</td><td>";
        in<<query->value(2).toString();
        in<<"</td></tr>";
    }
    in<<"</table></center></body></html>";
    file->close();

    QAxObject* word = new QAxObject("Word.Application", this);
    word->setProperty("DisplayAlerts", false);
    word->setProperty("Visible", true);
    QAxObject* doc = word->querySubObject("Documents");
    doc->dynamicCall("Open(QVariant)", ui->lineEdit->text());
}

