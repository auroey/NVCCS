/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label_title;
    QLineEdit *line_account;
    QLineEdit *line_password;
    QPushButton *Button_login;
    QPushButton *Button_cancel;
    QLabel *label_error;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(448, 296);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        Widget->setPalette(palette);
        label_title = new QLabel(Widget);
        label_title->setObjectName("label_title");
        label_title->setGeometry(QRect(124, 55, 200, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\261\211\344\273\252\344\270\255\351\273\221 197")});
        font.setPointSize(20);
        font.setBold(true);
        label_title->setFont(font);
        label_title->setAlignment(Qt::AlignCenter);
        line_account = new QLineEdit(Widget);
        line_account->setObjectName("line_account");
        line_account->setGeometry(QRect(124, 105, 200, 30));
        QFont font1;
        font1.setBold(false);
        line_account->setFont(font1);
        line_password = new QLineEdit(Widget);
        line_password->setObjectName("line_password");
        line_password->setGeometry(QRect(124, 145, 200, 30));
        Button_login = new QPushButton(Widget);
        Button_login->setObjectName("Button_login");
        Button_login->setGeometry(QRect(124, 195, 90, 30));
        QFont font2;
        font2.setBold(true);
        Button_login->setFont(font2);
        Button_cancel = new QPushButton(Widget);
        Button_cancel->setObjectName("Button_cancel");
        Button_cancel->setGeometry(QRect(234, 195, 90, 30));
        Button_cancel->setFont(font2);
        label_error = new QLabel(Widget);
        label_error->setObjectName("label_error");
        label_error->setGeometry(QRect(124, 240, 200, 30));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        label_error->setFont(font3);
        label_error->setAlignment(Qt::AlignCenter);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Neusoft VCC System", nullptr));
        label_title->setText(QCoreApplication::translate("Widget", "NEUsoft VCCS", nullptr));
        line_account->setStyleSheet(QCoreApplication::translate("Widget", "\n"
"     QLineEdit {\n"
"       background-color: #333;\n"
"       border: 2px solid #444;\n"
"       border-radius: 15px;\n"
"       padding: 5px;\n"
"       color: white;\n"
"     }\n"
"    ", nullptr));
        line_account->setPlaceholderText(QCoreApplication::translate("Widget", "Username", nullptr));
        line_password->setStyleSheet(QCoreApplication::translate("Widget", "\n"
"     QLineEdit {\n"
"       background-color: #333;\n"
"       border: 2px solid #444;\n"
"       border-radius: 15px;\n"
"       padding: 5px;\n"
"       color: white;\n"
"     }\n"
"    ", nullptr));
        line_password->setPlaceholderText(QCoreApplication::translate("Widget", "Password", nullptr));
        Button_login->setStyleSheet(QCoreApplication::translate("Widget", "\n"
"     QPushButton {\n"
"       background-color: #27ae60;\n"
"       color: white;\n"
"       border: none;\n"
"       padding: 5px;\n"
"       border-radius: 15px;\n"
"     }\n"
"     QPushButton:hover {\n"
"       background-color: #1e8449;\n"
"     }\n"
"    ", nullptr));
        Button_login->setText(QCoreApplication::translate("Widget", "LOGIN", nullptr));
        Button_cancel->setStyleSheet(QCoreApplication::translate("Widget", "\n"
"     QPushButton {\n"
"       background-color: #c0392b;\n"
"       color: white;\n"
"       border: none;\n"
"       padding: 5px;\n"
"       border-radius: 15px;\n"
"     }\n"
"     QPushButton:hover {\n"
"       background-color: #a93226;\n"
"     }\n"
"    ", nullptr));
        Button_cancel->setText(QCoreApplication::translate("Widget", "CANCEL", nullptr));
        label_error->setStyleSheet(QCoreApplication::translate("Widget", "color: rgb(235, 42,  6);", nullptr));
        label_error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
