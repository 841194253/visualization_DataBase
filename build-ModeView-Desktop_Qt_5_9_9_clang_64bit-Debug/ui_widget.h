/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTableView *tableView;
    QPushButton *ButtonAdd;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *ButtonFind;
    QPushButton *ButtonDelete;
    QPushButton *ButtonSure;
    QPushButton *ButtonCancel;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEditIP;
    QLineEdit *lineEditUserName;
    QLineEdit *lineEditPassWord;
    QLineEdit *lineEditDataBaseName;
    QLineEdit *lineEditTableName;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(665, 334);
        tableView = new QTableView(Widget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(240, 10, 421, 221));
        ButtonAdd = new QPushButton(Widget);
        ButtonAdd->setObjectName(QStringLiteral("ButtonAdd"));
        ButtonAdd->setGeometry(QRect(240, 240, 91, 35));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(340, 290, 201, 21));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 290, 82, 19));
        ButtonFind = new QPushButton(Widget);
        ButtonFind->setObjectName(QStringLiteral("ButtonFind"));
        ButtonFind->setGeometry(QRect(570, 280, 91, 35));
        ButtonDelete = new QPushButton(Widget);
        ButtonDelete->setObjectName(QStringLiteral("ButtonDelete"));
        ButtonDelete->setGeometry(QRect(350, 240, 91, 35));
        ButtonSure = new QPushButton(Widget);
        ButtonSure->setObjectName(QStringLiteral("ButtonSure"));
        ButtonSure->setGeometry(QRect(460, 240, 91, 35));
        ButtonCancel = new QPushButton(Widget);
        ButtonCancel->setObjectName(QStringLiteral("ButtonCancel"));
        ButtonCancel->setGeometry(QRect(570, 240, 91, 35));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(12, 12, 65, 19));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 60, 61, 19));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 110, 61, 19));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 160, 71, 16));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 210, 71, 19));
        lineEditIP = new QLineEdit(Widget);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));
        lineEditIP->setGeometry(QRect(91, 12, 141, 21));
        lineEditUserName = new QLineEdit(Widget);
        lineEditUserName->setObjectName(QStringLiteral("lineEditUserName"));
        lineEditUserName->setGeometry(QRect(90, 60, 141, 21));
        lineEditPassWord = new QLineEdit(Widget);
        lineEditPassWord->setObjectName(QStringLiteral("lineEditPassWord"));
        lineEditPassWord->setGeometry(QRect(90, 110, 141, 21));
        lineEditDataBaseName = new QLineEdit(Widget);
        lineEditDataBaseName->setObjectName(QStringLiteral("lineEditDataBaseName"));
        lineEditDataBaseName->setGeometry(QRect(90, 160, 141, 21));
        lineEditTableName = new QLineEdit(Widget);
        lineEditTableName->setObjectName(QStringLiteral("lineEditTableName"));
        lineEditTableName->setGeometry(QRect(90, 210, 141, 21));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 270, 171, 35));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        ButtonAdd->setText(QApplication::translate("Widget", "\345\242\236\345\212\240", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\346\237\245\346\211\276\346\225\260\346\215\256:", Q_NULLPTR));
        ButtonFind->setText(QApplication::translate("Widget", "\346\237\245\346\211\276", Q_NULLPTR));
        ButtonDelete->setText(QApplication::translate("Widget", "\345\210\240\351\231\244", Q_NULLPTR));
        ButtonSure->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", Q_NULLPTR));
        ButtonCancel->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\345\272\223\345\234\260\345\235\200", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\345\257\206\347\240\201", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\345\272\223\345\220\215", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\350\241\250\345\220\215", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "\350\277\236\346\216\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
