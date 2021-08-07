#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //应用程序类，负责整个窗口的事件处理，该对象有且只有一个
    QApplication a(argc, argv);

    //创建窗口对象
    MainWindow w;

    //显示窗口
    w.show();

    //进入事件循环
    return a.exec();
}
