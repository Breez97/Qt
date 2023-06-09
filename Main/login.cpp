#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

    ui->lineEdit->setText("LAPTOP-447PARE6\\SQLEXPRESS");
    ui->lineEdit_2->setText("Qt");

    ui->lineEdit_4->setEchoMode(QLineEdit::Password);
    mes = new QMessageBox();
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("DRIVER={SQL Server};SERVER="+ui->lineEdit->text()+";DATABASE="+ui->lineEdit_2->text()+";");
    db.setUserName(ui->lineEdit_3->text());
    db.setPassword(ui->lineEdit_4->text());

    if(db.open())
    {
        mes->setText("Соединение установлено");
    }
    else
    {
        mes->setText("Соединение не установлено");
    }
    mes->show();
}

