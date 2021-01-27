#ifndef WORDC_H
#define WORDC_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class WordC; }
QT_END_NAMESPACE

class WordC : public QMainWindow
{
    Q_OBJECT

public:
    WordC(QWidget *parent = nullptr);
    ~WordC();

private slots:
    void wordsCounter();

private:
    Ui::WordC *ui;
};
#endif // WORDC_H
