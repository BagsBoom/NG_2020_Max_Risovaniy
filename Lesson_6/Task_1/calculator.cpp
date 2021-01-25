#include "calculator.h"
#include "ui_calculator.h"
#include <QDoubleValidator>
#include <QLineEdit>
#include <QString>
#include <QDebug>

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);


    connect(ui->sumButton,&QPushButton::clicked, this, &Calculator::sum);
    ui->line_result->setReadOnly(1);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::sum()
{
    int number_1 = 0;
    int number_2 = 0;
    int summa = 0;
    QString sum_1;
    QString sum_2;
    QString finalSum;
    sum_1 = ui->num_1->text();
    sum_2 = ui->num_2->text();
    number_1 = sum_1.toInt();
    number_2 = sum_2.toInt();
    summa = number_1 + number_2;
    finalSum = QString::number(summa);
    ui->line_result->setText(finalSum);
}

