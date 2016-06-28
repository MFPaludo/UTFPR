#include "mainwindow.h"//biblioteca da janela principal
#include <QApplication>//classe principal da aplicação

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
