#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"soft_keyboard.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Soft_Keyboard* keyboard;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
