#ifndef IZMENENIE_H
#define IZMENENIE_H

#include <QWidget>
#include <QSqlQuery>

namespace Ui {
class izmenenie;
}

class izmenenie : public QWidget
{
    Q_OBJECT

public:
    explicit izmenenie(QWidget *parent = nullptr);
    ~izmenenie();

    int postcombo;

private slots:
    void obr_sendID(int);

    void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

signals:
    void upd_table();

private:
    Ui::izmenenie *ui;
};

#endif // IZMENENIE_H
