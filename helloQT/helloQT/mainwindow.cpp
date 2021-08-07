#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) //实例化Ui窗口
{
    ui->setupUi(this); //捆绑对象
}

MainWindow::~MainWindow()
{
    delete ui;
}

