/********************************************************************************
** Form generated from reading UI file 'print.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINT_H
#define UI_PRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_print
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *print)
    {
        if (print->objectName().isEmpty())
            print->setObjectName(QString::fromUtf8("print"));
        print->resize(585, 54);
        horizontalLayout = new QHBoxLayout(print);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(print);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        font.setBold(true);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(print);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(print);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(print);

        QMetaObject::connectSlotsByName(print);
    } // setupUi

    void retranslateUi(QWidget *print)
    {
        print->setWindowTitle(QCoreApplication::translate("print", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("print", "...", nullptr));
        pushButton_2->setText(QCoreApplication::translate("print", "\320\241\321\204\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class print: public Ui_print {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINT_H
