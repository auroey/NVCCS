#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QTime>
#include <QTimer>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private slots:
    void updateTime();
    void on_pushButton_confirm_clicked();
    void on_pushButton_workrest_clicked();
    void on_pushButton_confirm_keep_working_clicked();
    void on_pushButton_confirm_keep_resting_clicked();
    void on_pushButton_sos_clicked();

private:
    Ui::Form *ui;
    QTimer *timer;
    QTime workStartTime;
    QTime workEndTime;
    QTime currentRestTime;
    QTime totalRestTime;
    QTime currentWorkTime;
    QTime lastRestTime;
    QTime nextRestTime;
    QTime testStartTime;
    bool isResting;
    bool isTestMode;

    void calculateWorkTime(const QTime& currentTime);
    void updateRestTimes();
    void updateRestSchedule();
    void updateWarning();
};

#endif // FORM_H
