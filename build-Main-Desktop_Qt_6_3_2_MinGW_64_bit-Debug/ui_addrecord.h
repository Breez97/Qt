/********************************************************************************
** Form generated from reading UI file 'addrecord.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRECORD_H
#define UI_ADDRECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addrecord
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QDateEdit *dateEdit;
    QToolButton *toolButton;
    QLabel *label_3;
    QComboBox *comboBox;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;

    void setupUi(QWidget *addrecord)
    {
        if (addrecord->objectName().isEmpty())
            addrecord->setObjectName(QString::fromUtf8("addrecord"));
        addrecord->resize(407, 385);
        gridLayout = new QGridLayout(addrecord);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(addrecord);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        font.setBold(true);
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 10, 0, 1, 2);

        dateEdit = new QDateEdit(addrecord);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setFont(font);
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setCalendarPopup(true);

        gridLayout->addWidget(dateEdit, 9, 0, 1, 2);

        toolButton = new QToolButton(addrecord);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        gridLayout->addWidget(toolButton, 2, 0, 1, 1);

        label_3 = new QLabel(addrecord);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        comboBox = new QComboBox(addrecord);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);

        gridLayout->addWidget(comboBox, 5, 0, 1, 2);

        lineEdit_2 = new QLineEdit(addrecord);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setFont(font);
        lineEdit_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_2, 7, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 1, 1, 1);

        lineEdit = new QLineEdit(addrecord);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit, 1, 0, 1, 2);

        label = new QLabel(addrecord);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_4 = new QLabel(addrecord);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 8, 0, 1, 2);

        label_2 = new QLabel(addrecord);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 4, 0, 1, 2);

        label_5 = new QLabel(addrecord);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 6, 0, 1, 2);


        retranslateUi(addrecord);

        QMetaObject::connectSlotsByName(addrecord);
    } // setupUi

    void retranslateUi(QWidget *addrecord)
    {
        addrecord->setWindowTitle(QCoreApplication::translate("addrecord", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("addrecord", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        toolButton->setText(QCoreApplication::translate("addrecord", "...", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("addrecord", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("addrecord", "\320\224\320\260\321\202\320\260 \320\277\320\276\321\201\321\202\320\260\320\262\320\272\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("addrecord", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("addrecord", "ID \320\272\320\260\321\202\320\265\320\263\320\276\321\200\320\270\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addrecord: public Ui_addrecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRECORD_H
