#include "widget.h"
#include "form.h"
#include <QMessageBox>
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QDialog(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);
    // 设置密码输入框的 echoMode 属性
    ui->line_password->setEchoMode(QLineEdit::Password);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_Button_login_clicked()
{
    if (ui->line_account->text() == "admin" && ui->line_password->text() == "1234") {
        this->hide(); // 隐藏登录窗口
        Form *formWindow = new Form();
        formWindow->show();
        formWindow->setAttribute(Qt::WA_DeleteOnClose); // 关闭时删除对象
    } else {
        ui->label_error->setText("Account or password error!");
    }
}

void Widget::on_Button_cancel_clicked()
{
    reject();
}
