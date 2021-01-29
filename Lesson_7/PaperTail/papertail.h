#ifndef PAPERTAIL_H
#define PAPERTAIL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PaperTail; }
QT_END_NAMESPACE

class PaperTail : public QMainWindow
{
    Q_OBJECT

public:
    PaperTail(QWidget *parent = nullptr);
    ~PaperTail();
private slots:
    void save();
    void load();
    void setFont();
    void changeFontSize();

    void s_italic();
    void s_bold();
    void s_underline();
    void s_superbold();

    void colors();
    void textPosition();

private:
    Ui::PaperTail *ui;
};
#endif // PAPERTAIL_H
