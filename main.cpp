#include "dupfishkiller.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DupfishKiller w;
    w.show();
    return a.exec();
}
