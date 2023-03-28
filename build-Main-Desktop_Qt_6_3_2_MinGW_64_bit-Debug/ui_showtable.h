/********************************************************************************
** Form generated from reading UI file 'showtable.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWTABLE_H
#define UI_SHOWTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showtable
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *showtable)
    {
        if (showtable->objectName().isEmpty())
            showtable->setObjectName(QString::fromUtf8("showtable"));
        showtable->resize(738, 294);
        gridLayout = new QGridLayout(showtable);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(showtable);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 3, 4, 2);

        lineEdit = new QLineEdit(showtable);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        font.setBold(true);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit, 1, 1, 1, 2);

        pushButton = new QPushButton(showtable);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 2, 1, 1, 2);

        label = new QLabel(showtable);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 2);


        retranslateUi(showtable);

        QMetaObject::connectSlotsByName(showtable);
    } // setupUi

    void retranslateUi(QWidget *showtable)
    {
        showtable->setWindowTitle(QCoreApplication::translate("showtable", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("showtable", "\320\236\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", nullptr));
        label->setText(QCoreApplication::translate("showtable", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showtable: public Ui_showtable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWTABLE_H
