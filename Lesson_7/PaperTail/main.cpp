#include "papertail.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PaperTail w;
    w.show();
    return a.exec();
}
