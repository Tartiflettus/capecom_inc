#include "doublevitrage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DoubleVitrage w;
    w.show();

    return a.exec();
}
