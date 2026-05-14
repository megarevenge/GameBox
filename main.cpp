#include "wordliwindow.h"
#include "randomword.h"
#include <QApplication>
#include <cstdlib>


int main(int argc, char *argv[])
{
    srand(time(nullptr));

    createWordsFile();
    QApplication a(argc, argv);
    WordliWindow w;
    w.show();
    return QCoreApplication::exec();
}

