#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPushButton>
#include<QDebug>
#include<QDialog>
#include<iostream>
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(400, 300));
    QPixmap pix ("C:/Users/devuser1/Desktop/qtscreens/apptest1/logo.jpeg");
 //   ui->label_3->setPixmap(pix);
    ui->label_3->setPixmap(pix.scaled(ui->label_3->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openUsercreds(){

    if(ui->lineEdit->text()!=NULL){
        std::string input;
        input=ui->lineEdit->text().toStdString();
        QMessageBox::information(this,"Address",QString::fromStdString(input));
        myusercreds = new usercreds();
        myusercreds->show();
        this->hide();

    }
    else{
        QMessageBox::warning(this,"Error","Enter a valid server address");
    }


}

void MainWindow::on_pushButton_clicked()
{
    openUsercreds();

}






void MainWindow::on_lineEdit_editingFinished()
{

}
