#ifndef WIDGET_H
#define WIDGET_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QDialog
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_Button_login_clicked();
    void on_Button_cancel_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
