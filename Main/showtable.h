#ifndef SHOWTABLE_H
#define SHOWTABLE_H

#include <QWidget>

#include <QSqlQueryModel>

namespace Ui {
class showtable;
}

class showtable : public QWidget
{
    Q_OBJECT

public:
    explicit showtable(QWidget *parent = nullptr);
    ~showtable();

private slots:
    void on_pushButton_clicked();

private:
    Ui::showtable *ui;

    QSqlQueryModel* model;
};

#endif // SHOWTABLE_H
