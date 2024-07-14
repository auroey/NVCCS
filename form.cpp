#include "form.h"
#include "ui_form.h"
#include <QTime>
#include <QDateTime>
#include <QMessageBox>

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form),
    isResting(false), // 初始化状态为工作状态
    isTestMode(false) // 初始化测试模式为关闭
{
    ui->setupUi(this);

    // 初始化当前时间和工作时间
    workStartTime = QTime(8, 0, 0);
    workEndTime = QTime(16, 0, 0);
    currentRestTime = QTime(0, 0);
    totalRestTime = QTime(0, 0);
    currentWorkTime = QTime(0, 0);
    lastRestTime = workStartTime; // 初始为 8:00
    nextRestTime = workStartTime.addSecs(2 * 60 * 60); // 初始为 10:00

    // 设置定时器更新当前时间
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Form::updateTime);
    timer->start(1000);

    // 设置初始时间
    testStartTime = QTime::currentTime();
    ui->label_warning->hide(); // 初始隐藏警告标签
    updateTime();
    updateRestSchedule();
    ui->label_state->setText("WORK"); // 初始状态为工作

    // 初始显示当前时间
    QTime currentTime = QTime::currentTime();
    ui->label_current_time->setText(currentTime.toString("HH:mm:ss"));
}

Form::~Form()
{
    delete ui;
}

void Form::updateTime()
{
    QTime currentTime = QTime::currentTime();
    ui->label_current_time->setText(currentTime.toString("HH:mm:ss"));

    calculateWorkTime(currentTime);
    if (isTestMode) {
        testStartTime = testStartTime.addSecs(1);
        ui->label_current_time->setText(testStartTime.toString("HH:mm:ss"));
        calculateWorkTime(testStartTime);

        if (isResting) {
            currentRestTime = currentRestTime.addSecs(1);
            totalRestTime = totalRestTime.addSecs(1);
            updateRestTimes();
        } else {
            currentWorkTime = currentWorkTime.addSecs(1);
        }

        updateWarning();
    }
}

void Form::calculateWorkTime(const QTime& currentTime)
{
    int secondsWorked = workStartTime.secsTo(currentTime);
    int totalWorkSeconds = workStartTime.secsTo(workEndTime);

    if (secondsWorked < 0) {
        secondsWorked = 0;
    }

    int secondsRemaining = totalWorkSeconds - secondsWorked;
    if (secondsRemaining < 0) {
        secondsRemaining = 0;
    }

    ui->label_work_remain->setText(QTime(0, 0).addSecs(secondsWorked).toString("HH:mm:ss"));
    ui->label_total_work->setText(QTime(0, 0).addSecs(secondsRemaining).toString("HH:mm:ss"));
}

void Form::on_pushButton_confirm_clicked()
{
    QTime testTime = QTime::fromString(ui->lineEdit_test_time->text(), "HH:mm:ss");
    if (!testTime.isValid()) {
        return;
    }

    isTestMode = true; // 进入测试模式
    testStartTime = testTime;
    currentWorkTime = QTime(0, 0); // 重置当前工作时间

    // 确保定时器正在运行并从测试时间开始
    timer->start(1000);
    updateTime();
}

void Form::on_pushButton_workrest_clicked()
{
    QTime currentTime = testStartTime;

    if (isResting) {
        // 从休息状态切换到工作状态
        isResting = false;
        currentRestTime = QTime(0, 0); // 重置当前休息时间
        ui->label_current_rest->setText(currentRestTime.toString("HH:mm:ss"));
        ui->label_state->setText("WORK"); // 更新状态标签
    } else {
        // 从工作状态切换到休息状态
        isResting = true;
        currentWorkTime = QTime(0, 0); // 重置当前工作时间
        lastRestTime = currentTime; // 更新上次休息时间
        nextRestTime = lastRestTime.addSecs(2 * 60 * 60); // 更新下次休息时间
        updateRestSchedule();
        ui->label_state->setText("REST"); // 更新状态标签
    }
}

void Form::updateRestTimes()
{
    ui->label_current_rest->setText(currentRestTime.toString("HH:mm:ss"));
    ui->label_total_rest->setText(totalRestTime.toString("HH:mm:ss"));
}

void Form::updateRestSchedule()
{
    ui->label_last_rest_time->setText(lastRestTime.toString("HH:mm:ss"));
    ui->label_next_rest_time->setText(nextRestTime.toString("HH:mm:ss"));
}

void Form::updateWarning()
{
    // 检查是否需要显示警告
    if (currentWorkTime >= QTime(2, 0, 0) || currentRestTime >= QTime(1, 0, 0)) {
        ui->label_warning->show();
    } else {
        ui->label_warning->hide();
    }
}

void Form::on_pushButton_confirm_keep_working_clicked()
{
    QTime keepWorkingTime = QTime::fromString(ui->lineEdit_test_time_2->text(), "HH:mm:ss");
    if (!keepWorkingTime.isValid()) {
        return;
    }

    currentWorkTime = keepWorkingTime;
}

void Form::on_pushButton_confirm_keep_resting_clicked()
{
    QTime keepRestingTime = QTime::fromString(ui->lineEdit_test_time_3->text(), "HH:mm:ss");
    if (!keepRestingTime.isValid()) {
        return;
    }

    totalRestTime = keepRestingTime;
    currentRestTime = keepRestingTime; // 只做测试，不更改 currentRestTime
}

void Form::on_pushButton_sos_clicked()
{
    QMessageBox::information(this, "SOS", "SOS message sent");
}
