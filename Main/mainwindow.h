#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//#include <QSqlTableModel>
#include <QSqlQueryModel>

#include <QPrinter>
#include <QTextDocument>
#include <QFileDialog>
#include <QPdfWriter>

#include "login.h"
#include "ui_login.h"

#include "addrecord.h"
#include "ui_addrecord.h"

#include "showtable.h"
#include "ui_showtable.h"

#include "izmenenie.h"
#include "ui_izmenenie.h"

#include "print.h"
#include "ui_print.h"

#include "printgraf.h"
#include "ui_printgraf.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    login* logwin;
    addrecord* dopzap;
    showtable* show_table;
    izmenenie* izm;
    print* pechat;
    printgraf* pg;

    int globid;
    int fl;
    int postcombo;
    int comb;

private slots:
    void on_action_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void obr_ref_table();

    void on_pushButton_3_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void CustomMenuReq(QPoint);

    void del_zap();

    void izm_zap();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_action_2_triggered();

signals:
    void sendID(int);

private:
    Ui::MainWindow *ui;
    //QSqlTableModel* model;
    QSqlQueryModel* model;
};
#endif // MAINWINDOW_H
