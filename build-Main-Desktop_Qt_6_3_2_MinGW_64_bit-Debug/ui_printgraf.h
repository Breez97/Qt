/********************************************************************************
** Form generated from reading UI file 'printgraf.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTGRAF_H
#define UI_PRINTGRAF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_printgraf
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QCustomPlot *widget;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *printgraf)
    {
        if (printgraf->objectName().isEmpty())
            printgraf->setObjectName(QString::fromUtf8("printgraf"));
        printgraf->resize(586, 503);
        gridLayout_2 = new QGridLayout(printgraf);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QCustomPlot(printgraf);
        widget->setObjectName(QString::fromUtf8("widget"));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(530, 410, 20, 20));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        pushButton = new QPushButton(printgraf);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        font.setBold(true);
        pushButton->setFont(font);

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);


        retranslateUi(printgraf);

        QMetaObject::connectSlotsByName(printgraf);
    } // setupUi

    void retranslateUi(QWidget *printgraf)
    {
        printgraf->setWindowTitle(QCoreApplication::translate("printgraf", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("printgraf", "\320\237\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\321\214 \320\262 PDF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class printgraf: public Ui_printgraf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTGRAF_H
