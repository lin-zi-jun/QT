#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "testwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) //实例化Ui窗口
{
    ui->setupUi(this); //捆绑对象

    //一般在QT的构造函数中进行初始化操作（窗口，数据，....）
    //显示另外一个窗口
    //创建窗口对象,没有指定父对象
#if 0
    TestWidget* w = new TestWidget;
    //显示当前窗口
    w->show();
#else
    //指定父对象，内嵌
    TestWidget* w = new TestWidget(this);
#endif

}

MainWindow::~MainWindow()
{
    delete ui;
}

