#include "mainwindow.h"
#include <QApplication>

#include<QStyle>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setWindowTitle("Digital Vault");
    return a.exec();
}
