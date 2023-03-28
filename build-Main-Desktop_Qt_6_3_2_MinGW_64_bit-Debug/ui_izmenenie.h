/********************************************************************************
** Form generated from reading UI file 'izmenenie.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IZMENENIE_H
#define UI_IZMENENIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_izmenenie
{
public:
    QGridLayout *gridLayout;
    QDateEdit *dateEdit;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLabel *label_5;

    void setupUi(QWidget *izmenenie)
    {
        if (izmenenie->objectName().isEmpty())
            izmenenie->setObjectName(QString::fromUtf8("izmenenie"));
        izmenenie->resize(400, 386);
        gridLayout = new QGridLayout(izmenenie);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dateEdit = new QDateEdit(izmenenie);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        font.setBold(true);
        dateEdit->setFont(font);
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setCalendarPopup(true);

        gridLayout->addWidget(dateEdit, 7, 0, 1, 1);

        label = new QLabel(izmenenie);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(izmenenie);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        lineEdit_3->setFont(font);
        lineEdit_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_3, 1, 0, 1, 1);

        label_4 = new QLabel(izmenenie);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 8, 0, 1, 1);

        label_2 = new QLabel(izmenenie);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        lineEdit = new QLineEdit(izmenenie);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit, 3, 0, 1, 1);

        lineEdit_2 = new QLineEdit(izmenenie);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setFont(font);
        lineEdit_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_2, 9, 0, 1, 1);

        label_3 = new QLabel(izmenenie);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        comboBox = new QComboBox(izmenenie);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);

        gridLayout->addWidget(comboBox, 5, 0, 1, 1);

        pushButton = new QPushButton(izmenenie);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 11, 0, 1, 1);

        label_5 = new QLabel(izmenenie);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 6, 0, 1, 1);


        retranslateUi(izmenenie);

        QMetaObject::connectSlotsByName(izmenenie);
    } // setupUi

    void retranslateUi(QWidget *izmenenie)
    {
        izmenenie->setWindowTitle(QCoreApplication::translate("izmenenie", "Form", nullptr));
        label->setText(QCoreApplication::translate("izmenenie", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("izmenenie", "ID \320\272\320\260\321\202\320\265\320\263\320\276\321\200\320\270\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("izmenenie", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("izmenenie", "ID", nullptr));
        pushButton->setText(QCoreApplication::translate("izmenenie", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label_5->setText(QCoreApplication::translate("izmenenie", "\320\224\320\260\321\202\320\260 \320\277\320\276\321\201\321\202\320\260\320\262\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class izmenenie: public Ui_izmenenie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IZMENENIE_H
