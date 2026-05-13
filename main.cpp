#include "seashipselectingwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SeaShipSelectingWindow p1;
    p1.fileName = "p1.dat";
    p1.resize(800, 600);
    p1.setWindowTitle("Sea Battle");
    p1.show();
    return QCoreApplication::exec();
}
