#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
//对应UI界面中的MainWindow
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


//继承标准窗口类
//该基类有三个下拉框：
//1.Qwidget 所有窗口类的基类


//2.QDialog
//3.QMainWindow
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
