/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label_warning;
    QPushButton *pushButton_workrest;
    QLabel *label_current_time;
    QPushButton *pushButton_sos;
    QLabel *label_test_time;
    QLineEdit *lineEdit_test_time;
    QPushButton *pushButton_confirm;
    QLabel *label_time_keep_working;
    QLineEdit *lineEdit_test_time_2;
    QLabel *label_time_keep_resting;
    QLineEdit *lineEdit_test_time_3;
    QPushButton *pushButton_confirm_keep_working;
    QPushButton *pushButton_confirm_keep_resting;
    QLabel *label_state;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *current_rest;
    QLabel *work_remain;
    QLabel *label_total_rest;
    QLabel *total_work;
    QLabel *label_current_rest;
    QLabel *last_rest_time;
    QLabel *next_rest_time;
    QLabel *total_rest;
    QLabel *label_next_rest_time;
    QLabel *label_last_rest_time;
    QLabel *label_work_remain;
    QLabel *label_total_work;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(524, 388);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Form->setPalette(palette);
        label_warning = new QLabel(Form);
        label_warning->setObjectName("label_warning");
        label_warning->setGeometry(QRect(200, 30, 121, 121));
        label_warning->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/warning.png")));
        label_warning->setScaledContents(true);
        pushButton_workrest = new QPushButton(Form);
        pushButton_workrest->setObjectName("pushButton_workrest");
        pushButton_workrest->setGeometry(QRect(340, 40, 151, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        pushButton_workrest->setFont(font);
        pushButton_workrest->setStyleSheet(QString::fromUtf8("\n"
"      QPushButton {\n"
"        background-color: rgb(255,178,  0);\n"
"        color: white;\n"
"        border: none;\n"
"        padding: 5px;\n"
"        border-radius: 15px;\n"
"      }\n"
"    "));
        label_current_time = new QLabel(Form);
        label_current_time->setObjectName("label_current_time");
        label_current_time->setGeometry(QRect(50, 140, 261, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font1.setPointSize(40);
        label_current_time->setFont(font1);
        label_current_time->setStyleSheet(QString::fromUtf8("color: white;"));
        pushButton_sos = new QPushButton(Form);
        pushButton_sos->setObjectName("pushButton_sos");
        pushButton_sos->setGeometry(QRect(380, 260, 81, 81));
        pushButton_sos->setStyleSheet(QString::fromUtf8("border-radius: 40px; background-color: red; color: white;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/sos.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_sos->setIcon(icon);
        pushButton_sos->setIconSize(QSize(80, 80));
        label_test_time = new QLabel(Form);
        label_test_time->setObjectName("label_test_time");
        label_test_time->setGeometry(QRect(50, 260, 91, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font2.setBold(false);
        label_test_time->setFont(font2);
        label_test_time->setStyleSheet(QString::fromUtf8("color: white;"));
        lineEdit_test_time = new QLineEdit(Form);
        lineEdit_test_time->setObjectName("lineEdit_test_time");
        lineEdit_test_time->setGeometry(QRect(150, 260, 81, 20));
        pushButton_confirm = new QPushButton(Form);
        pushButton_confirm->setObjectName("pushButton_confirm");
        pushButton_confirm->setGeometry(QRect(249, 260, 71, 20));
        QFont font3;
        font3.setBold(true);
        pushButton_confirm->setFont(font3);
        pushButton_confirm->setAutoFillBackground(false);
        pushButton_confirm->setStyleSheet(QString::fromUtf8("\n"
"      QPushButton {\n"
"        background-color: rgb(235, 91,  0);\n"
"        color: white;\n"
"        border: none;\n"
"        padding: 5px;\n"
"        border-radius: 5px;\n"
"      }\n"
"    "));
        label_time_keep_working = new QLabel(Form);
        label_time_keep_working->setObjectName("label_time_keep_working");
        label_time_keep_working->setGeometry(QRect(50, 290, 121, 16));
        label_time_keep_working->setFont(font2);
        label_time_keep_working->setStyleSheet(QString::fromUtf8("color: white;"));
        lineEdit_test_time_2 = new QLineEdit(Form);
        lineEdit_test_time_2->setObjectName("lineEdit_test_time_2");
        lineEdit_test_time_2->setGeometry(QRect(150, 290, 81, 20));
        lineEdit_test_time_2->setStyleSheet(QString::fromUtf8("color: black;"));
        label_time_keep_resting = new QLabel(Form);
        label_time_keep_resting->setObjectName("label_time_keep_resting");
        label_time_keep_resting->setGeometry(QRect(50, 320, 111, 16));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font4.setBold(false);
        font4.setItalic(false);
        label_time_keep_resting->setFont(font4);
        label_time_keep_resting->setStyleSheet(QString::fromUtf8("color: white;"));
        lineEdit_test_time_3 = new QLineEdit(Form);
        lineEdit_test_time_3->setObjectName("lineEdit_test_time_3");
        lineEdit_test_time_3->setGeometry(QRect(150, 320, 81, 20));
        lineEdit_test_time_3->setStyleSheet(QString::fromUtf8("color: black;"));
        pushButton_confirm_keep_working = new QPushButton(Form);
        pushButton_confirm_keep_working->setObjectName("pushButton_confirm_keep_working");
        pushButton_confirm_keep_working->setGeometry(QRect(249, 290, 71, 20));
        pushButton_confirm_keep_working->setFont(font3);
        pushButton_confirm_keep_working->setAutoFillBackground(false);
        pushButton_confirm_keep_working->setStyleSheet(QString::fromUtf8("\n"
"      QPushButton {\n"
"        background-color: rgb(235, 91,  0);\n"
"        color: white;\n"
"        border: none;\n"
"        padding: 5px;\n"
"        border-radius: 5px;\n"
"      }\n"
"    "));
        pushButton_confirm_keep_resting = new QPushButton(Form);
        pushButton_confirm_keep_resting->setObjectName("pushButton_confirm_keep_resting");
        pushButton_confirm_keep_resting->setGeometry(QRect(249, 320, 71, 20));
        pushButton_confirm_keep_resting->setFont(font3);
        pushButton_confirm_keep_resting->setAutoFillBackground(false);
        pushButton_confirm_keep_resting->setStyleSheet(QString::fromUtf8("\n"
"      QPushButton {\n"
"        background-color: rgb(235, 91,  0);\n"
"        color: white;\n"
"        border: none;\n"
"        padding: 5px;\n"
"        border-radius: 5px;\n"
"      }\n"
"    "));
        label_state = new QLabel(Form);
        label_state->setObjectName("label_state");
        label_state->setGeometry(QRect(40, 40, 151, 81));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font5.setPointSize(30);
        font5.setBold(false);
        label_state->setFont(font5);
        label_state->setStyleSheet(QString::fromUtf8("color: white;"));
        label_state->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(Form);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(340, 90, 151, 151));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        current_rest = new QLabel(layoutWidget);
        current_rest->setObjectName("current_rest");
        current_rest->setFont(font2);
        current_rest->setStyleSheet(QString::fromUtf8("color: white;"));

        gridLayout->addWidget(current_rest, 4, 0, 1, 1);

        work_remain = new QLabel(layoutWidget);
        work_remain->setObjectName("work_remain");
        work_remain->setFont(font2);
        work_remain->setStyleSheet(QString::fromUtf8("color: white;"));

        gridLayout->addWidget(work_remain, 1, 0, 1, 1);

        label_total_rest = new QLabel(layoutWidget);
        label_total_rest->setObjectName("label_total_rest");
        label_total_rest->setFont(font2);
        label_total_rest->setStyleSheet(QString::fromUtf8("color: white;"));

        gridLayout->addWidget(label_total_rest, 3, 2, 1, 1);

        total_work = new QLabel(layoutWidget);
        total_work->setObjectName("total_work");
        total_work->setFont(font2);
        total_work->setStyleSheet(QString::fromUtf8("color: white;"));

        gridLayout->addWidget(total_work, 0, 0, 1, 1);

        label_current_rest = new QLabel(layoutWidget);
        label_current_rest->setObjectName("label_current_rest");
        label_current_rest->setFont(font2);
        label_current_rest->setStyleSheet(QString::fromUtf8("color: white;"));

        gridLayout->addWidget(label_current_rest, 4, 2, 1, 1);

        last_rest_time = new QLabel(layoutWidget);
        last_rest_time->setObjectName("last_rest_time");
        last_rest_time->setFont(font2);
        last_rest_time->setStyleSheet(QString::fromUtf8("color: white;"));

        gridLayout->addWidget(last_rest_time, 5, 0, 1, 1);

        next_rest_time = new QLabel(layoutWidget);
        next_rest_time->setObjectName("next_rest_time");
        next_rest_time->setFont(font2);
        next_rest_time->setStyleSheet(QString::fromUtf8("color: white;"));

        gridLayout->addWidget(next_rest_time, 6, 0, 1, 1);

        total_rest = new QLabel(layoutWidget);
        total_rest->setObjectName("total_rest");
        total_rest->setFont(font2);
        total_rest->setStyleSheet(QString::fromUtf8("color: white;"));

        gridLayout->addWidget(total_rest, 3, 0, 1, 1);

        label_next_rest_time = new QLabel(layoutWidget);
        label_next_rest_time->setObjectName("label_next_rest_time");
        label_next_rest_time->setFont(font2);
        label_next_rest_time->setStyleSheet(QString::fromUtf8("color: white;"));

        gridLayout->addWidget(label_next_rest_time, 6, 2, 1, 1);

        label_last_rest_time = new QLabel(layoutWidget);
        label_last_rest_time->setObjectName("label_last_rest_time");
        label_last_rest_time->setFont(font2);
        label_last_rest_time->setStyleSheet(QString::fromUtf8("color: white;"));

        gridLayout->addWidget(label_last_rest_time, 5, 2, 1, 1);

        label_work_remain = new QLabel(layoutWidget);
        label_work_remain->setObjectName("label_work_remain");
        label_work_remain->setFont(font2);
        label_work_remain->setStyleSheet(QString::fromUtf8("color: white;"));

        gridLayout->addWidget(label_work_remain, 0, 2, 1, 1);

        label_total_work = new QLabel(layoutWidget);
        label_total_work->setObjectName("label_total_work");
        label_total_work->setFont(font2);
        label_total_work->setStyleSheet(QString::fromUtf8("color: white;"));

        gridLayout->addWidget(label_total_work, 1, 2, 1, 1);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Neusoft VCC System", nullptr));
        label_warning->setText(QString());
        pushButton_workrest->setText(QCoreApplication::translate("Form", "WORK / REST", nullptr));
        label_current_time->setText(QCoreApplication::translate("Form", "00:00:00", nullptr));
        pushButton_sos->setText(QString());
        label_test_time->setText(QCoreApplication::translate("Form", "CURRENT TIME", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("Form", "CONFIRM", nullptr));
        label_time_keep_working->setText(QCoreApplication::translate("Form", "WORKED TIME", nullptr));
        lineEdit_test_time_2->setText(QString());
        label_time_keep_resting->setText(QCoreApplication::translate("Form", "REST TIME", nullptr));
        lineEdit_test_time_3->setText(QString());
        pushButton_confirm_keep_working->setText(QCoreApplication::translate("Form", "CONFIRM", nullptr));
        pushButton_confirm_keep_resting->setText(QCoreApplication::translate("Form", "CONFIRM", nullptr));
        label_state->setText(QCoreApplication::translate("Form", "WORK", nullptr));
        current_rest->setText(QCoreApplication::translate("Form", "CURRE REST", nullptr));
        work_remain->setText(QCoreApplication::translate("Form", "WORK REMAIN", nullptr));
        label_total_rest->setText(QCoreApplication::translate("Form", "00:00:00", nullptr));
        total_work->setText(QCoreApplication::translate("Form", "TOTAL WORK", nullptr));
        label_current_rest->setText(QCoreApplication::translate("Form", "00:00:00", nullptr));
        last_rest_time->setText(QCoreApplication::translate("Form", "LAST REST", nullptr));
        next_rest_time->setText(QCoreApplication::translate("Form", "NEXT REST", nullptr));
        total_rest->setText(QCoreApplication::translate("Form", "TOTAL REST", nullptr));
        label_next_rest_time->setText(QCoreApplication::translate("Form", "00:00:00", nullptr));
        label_last_rest_time->setText(QCoreApplication::translate("Form", "00:00:00", nullptr));
        label_work_remain->setText(QCoreApplication::translate("Form", "00:00:00", nullptr));
        label_total_work->setText(QCoreApplication::translate("Form", "00:00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
