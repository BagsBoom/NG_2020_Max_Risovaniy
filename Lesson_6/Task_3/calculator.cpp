#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    ui->userEdit->setReadOnly(1);

    connect(ui->bt_0, &QPushButton::clicked, this, &Calculator::Zero);
    connect(ui->bt_1, &QPushButton::clicked, this, &Calculator::One);
    connect(ui->bt_2, &QPushButton::clicked, this, &Calculator::Two);
    connect(ui->bt_3, &QPushButton::clicked, this, &Calculator::Three);
    connect(ui->bt_4, &QPushButton::clicked, this, &Calculator::Four);
    connect(ui->bt_5, &QPushButton::clicked, this, &Calculator::Five);
    connect(ui->bt_6, &QPushButton::clicked, this, &Calculator::Six);
    connect(ui->bt_7, &QPushButton::clicked, this, &Calculator::Seven);
    connect(ui->bt_8, &QPushButton::clicked, this, &Calculator::Eigth);
    connect(ui->bt_9, &QPushButton::clicked, this, &Calculator::Nine);

    connect(ui->bt_plus, &QPushButton::clicked, this, &Calculator::Plus);
    connect(ui->bt_minus, &QPushButton::clicked, this, &Calculator::Minus);
    connect(ui->bt_um,&QPushButton::clicked, this, &Calculator::Multiply);
    connect(ui->bt_del,&QPushButton::clicked, this, &Calculator::Division);

    connect(ui->bt_res, &QPushButton::clicked, this, &Calculator::Equal);
    connect(ui->bt_clearall, &QPushButton::clicked,this,&Calculator::cls);
}
Calculator::~Calculator()
{
    delete ui;
}

void Calculator::Zero()
{
    ui->userEdit->setText(ui->userEdit->text().operator+=('0'));
}

void Calculator::One()
{
    ui->userEdit->setText(ui->userEdit->text().operator+=('1'));
}

void Calculator::Two()
{
    ui->userEdit->setText(ui->userEdit->text().operator+=('2'));
}

void Calculator::Three()
{
    ui->userEdit->setText(ui->userEdit->text().operator+=('3'));
}

void Calculator::Four()
{
    ui->userEdit->setText(ui->userEdit->text().operator+=('4'));
}

void Calculator::Five()
{
    ui->userEdit->setText(ui->userEdit->text().operator+=('5'));
}

void Calculator::Six()
{
    ui->userEdit->setText(ui->userEdit->text().operator+=('6'));
}

void Calculator::Seven()
{
    ui->userEdit->setText(ui->userEdit->text().operator+=('7'));
}

void Calculator::Eigth()
{
    ui->userEdit->setText(ui->userEdit->text().operator+=('8'));
}

void Calculator::Nine()
{
    ui->userEdit->setText(ui->userEdit->text().operator+=('9'));
}

void Calculator::Plus()
{
    num_1 = ui->userEdit->text().toInt();
    option = '+';
   ui->userEdit->clear();
}

void Calculator::Minus()
{
    num_1 = ui->userEdit->text().toInt();
    option = '-';
    ui->userEdit->clear();
}

void Calculator::Multiply()
{
    num_1 = ui->userEdit->text().toInt();
    option = '*';
    ui->userEdit->clear();
}

void Calculator::Division()
{
    num_1 = ui->userEdit->text().toInt();
    option = '/';
    ui->userEdit->clear();
}


void Calculator::Equal()
{
    int res;
    num_2 = ui->userEdit->text().toInt();
    if(option == '+'){
        res = num_1 + num_2;
        ui->userEdit->setText(QString::number(num_1) + "+" + QString::number(num_2)+ "=" + QString::number(res));
    }
    if(option == '-'){
        res = num_1 - num_2;
        ui->userEdit->setText(QString::number(num_1) + "-" + QString::number(num_2)+ "=" + QString::number(res));
    }
    if(option == '*'){
        res = num_1 * num_2;
        ui->userEdit->setText(QString::number(num_1) + "*" + QString::number(num_2)+ "=" + QString::number(res));
    }
    if(option == '/'){
        res = num_1 / num_2;
        ui->userEdit->setText(QString::number(num_1) + "/" + QString::number(num_2)+ "=" + QString::number(res));
    }

}

void Calculator::cls()
{
    ui->userEdit->clear();
}

