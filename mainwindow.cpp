#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QLineEdit>
#include<QDebug>
#include<klineedit.h>
#include"ktextedit.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    KTextEdit* textEdit = new KTextEdit(this);
    textEdit->resize(200,200);
    //textEdit->move(0,500);
    keyboard = new Soft_Keyboard;
    ui->setupUi(this);
    KLineEdit *lineEdit = new KLineEdit(this);
    connect(lineEdit,SIGNAL(clicked()),keyboard,SLOT(show()));
    connect(textEdit,SIGNAL(clicked()),keyboard,SLOT(show()));
    connect(ui->listWidget,SIGNAL(clicked(QModelIndex)),keyboard,SLOT(show(const QModelIndex&)));
    connect(ui->tableWidget,SIGNAL(clicked(const QModelIndex&)),keyboard,SLOT(show(const QModelIndex&)));
}

MainWindow::~MainWindow()
{
    delete ui;
}





