#include "widget.h"
#include "./ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_calculateButton_clicked()
{
    double time, weight, speed;
    time  = ui->timeSpinBox->value();
    weight = ui->weightSpinBox->value();
    speed = ui->speedSpinBox->value();

    calory = (((0.0215 * pow(speed,3)) - (0.1765 * pow(speed,2)) + ((0.8710 * speed) +1.4577)) * weight * time);
    ui->caloryValue->setText(QString::number(calory));
    qDebug() << "Calory" << QString::number(calory);
}

