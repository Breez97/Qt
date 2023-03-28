#ifndef ADDRECORD_H
#define ADDRECORD_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>

#include <QFileDialog>

namespace Ui {
class addrecord;
}

class addrecord : public QWidget
{
    Q_OBJECT

public:
    explicit addrecord(QWidget *parent = nullptr);
    ~addrecord();

    QString imageadr;
    int postcombo;

private slots:
    void on_pushButton_clicked();

    void on_toolButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

signals:
    void refresh_table();

private:
    Ui::addrecord *ui;
};

#endif // ADDRECORD_H
