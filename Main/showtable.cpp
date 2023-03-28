#include "showtable.h"
#include "ui_showtable.h"

showtable::showtable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::showtable)
{
    ui->setupUi(this);
}

showtable::~showtable()
{
    delete ui;
}

void showtable::on_pushButton_clicked()
{
    model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM "+ui->lineEdit->text());

    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();
}

