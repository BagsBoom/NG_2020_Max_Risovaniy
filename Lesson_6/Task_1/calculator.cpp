#include "calculator.h"
#include "ui_calculator.h"
#include <QLineEdit>
#include <QString>

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
    ui->line_result->setText(QString::number(ui->num_1->text().toInt() + ui->num_2->text().toInt()));
}

