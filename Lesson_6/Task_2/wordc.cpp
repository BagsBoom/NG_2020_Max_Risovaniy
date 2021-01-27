#include "wordc.h"
#include "ui_wordc.h"


WordC::WordC(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WordC)
{
    ui->setupUi(this);
    ui->counter->setReadOnly(1);
    connect(ui->userText,&QTextEdit::textChanged,this, &WordC::wordsCounter);
}

WordC::~WordC()
{
    delete ui;
}

void WordC::wordsCounter()
{
    QString stroka = ui->userText->toPlainText();
    int i = 0;
    int word = 0;
    while(stroka[i] != '\0'){
        if((stroka[i] >= 'a' && stroka[i] <= 'z') || (stroka[i] >= 'A' && stroka[i] <= 'Z')){
            if(!(stroka[i + 1] >= 'a' && stroka[i + 1] <= 'z') && !(stroka[i + 1] >= 'A' && stroka[i + 1] <= 'Z')){
                word++;
            }
        }
        i++;
    }
    ui->counter->setValue(word);


    /* Second option */
    //    ui->counter->setValue(ui->userText->toPlainText().split(QRegExp("(\\s|\\n|\\r)+")
    //                                                         , QString::SkipEmptyParts).count());
}

