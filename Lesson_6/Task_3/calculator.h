#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();
private slots:
    void Zero();
    void One();
    void Two();
    void Three();
    void Four();
    void Five();
    void Six();
    void Seven();
    void Eigth();
    void Nine();

    void Plus();
    void Minus();
    void Multiply();
    void Division();

    void Equal();
    void cls();


private:
    Ui::Calculator *ui;
    QString option;
    int num_1;
    int num_2;
};
#endif // CALCULATOR_H
