#include "wordc.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WordC w;
    w.show();
    return a.exec();
}
