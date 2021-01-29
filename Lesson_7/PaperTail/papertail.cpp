#include "papertail.h"
#include "ui_papertail.h"

#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QFileDialog>
#include <QEvent>
#include <QMouseEvent>
#include <QColor>

PaperTail::PaperTail(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PaperTail)
{
    ui->setupUi(this);
    connect (ui->b_save, &QPushButton::clicked, this, &PaperTail::save);
    connect (ui->b_load, &QPushButton::clicked, this, &PaperTail::load);
    connect (ui->fontComboBox, &QFontComboBox::currentFontChanged, this, &PaperTail::setFont);
    connect (ui->fontSize, QOverload<int>::of(&QSpinBox::valueChanged), this, &PaperTail::changeFontSize);
    connect(ui->b_italic, &QPushButton::clicked, this, &PaperTail::s_italic);
    connect(ui->b_bold, &QPushButton::clicked,this, &PaperTail::s_bold);
    connect(ui->b_underline, &QPushButton::clicked,this, &PaperTail::s_underline);
    connect(ui->b_superbold, &QPushButton::clicked,this, &PaperTail::s_superbold);
    connect(ui->cb_colors, &QComboBox::currentTextChanged, this, &PaperTail::colors);
    connect(ui->cb_position, &QComboBox::currentTextChanged, this, &PaperTail::textPosition);

    ui->fontSize->setValue(12);
}

PaperTail::~PaperTail()
{
    delete ui;
}

void PaperTail::save()
{
    QString path = QFileDialog::getSaveFileName(this, "Сюда подошел",
                                              "/",
                                              "Всякая хрень (*);;Text files (*.txt)");
    if (path.isEmpty())
        return;

    QFile fileToSave(path);

    if (fileToSave.open(QIODevice::WriteOnly)) {

        QTextStream to(&fileToSave);
        to << ui->data->toHtml();

        fileToSave.close();
    } else {
        QMessageBox::warning(this, "Wow, we can't open the file!", fileToSave.errorString());
    }
}

void PaperTail::load()
{
    QString path = QFileDialog::getOpenFileName(this, "Откуда грузить",
                                                "/",
                                                "Всякая хрень (*);;Text files (*.txt)");
    if (path.isEmpty())
        return;

    QFile fileToLoad(path);
    if (fileToLoad.open(QIODevice::ReadOnly)) {

        QTextStream from(&fileToLoad);
        ui->data->setHtml(from.readAll());

        fileToLoad.close();
    } else {
        QMessageBox::warning(this, "Wow, we can't open the file!", fileToLoad.errorString());
    }
}

void PaperTail::setFont()
{
    QFont newFont = ui->fontComboBox->currentFont();
    newFont.setPixelSize(ui->fontSize->value());
    ui->data->setCurrentFont(newFont);
}

void PaperTail::changeFontSize()
{
    QFont existingFont = ui->data->currentFont();
    existingFont.setPixelSize(ui->fontSize->value());
    ui->data->setCurrentFont(existingFont);
}

void PaperTail::s_bold()
{
    ui->data->setFontWeight(QFont::DemiBold);
}

void PaperTail::s_underline()
{
    ui->data->setFontUnderline(true);
}

void PaperTail::s_superbold()
{
    ui->data->setFontWeight(QFont::Bold);
}

void PaperTail::colors()
{
    QString clr = ui->cb_colors->currentText();
    if(clr == "Yellow"){
    ui->data->setTextColor(QColor("yellow"));
    }
    if(clr == "Red"){
    ui->data->setTextColor(QColor("red"));
    }
    if(clr == "Cyan"){
        ui->data->setTextColor(QColor("cyan"));
    }

}

void PaperTail::textPosition()
{
    QString txtPos = ui->cb_position->currentText();
    if(txtPos == "LeftSide"){
        ui->data->setAlignment(Qt::AlignLeft);
    }
    if(txtPos == "RightSide"){
        ui->data->setAlignment(Qt::AlignRight);
    }
    if(txtPos == "Center"){
        ui->data->setAlignment(Qt::AlignCenter);
    }
    if(txtPos == "InWidth"){
        ui->data->setAlignment(Qt::AlignJustify);
    }
}

void PaperTail::s_italic()
{
    ui->data->setFontItalic(true);
}
