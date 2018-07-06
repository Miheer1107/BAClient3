#include "serverselection.h"
#include "ui_serverselection.h"
#include<QMessageBox>
ServerSelection::ServerSelection(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ServerSelection)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(400, 300));
    this->setWindowTitle("Digital Vault");


}

ServerSelection::~ServerSelection()
{
    delete ui;
}

void ServerSelection::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked()){
        QMessageBox::information(this,"Selection",ui->radioButton->text());
    }

    if(ui->radioButton_2->isChecked()){
        QMessageBox::information(this,"Selection",ui->radioButton_2->text());
    }

    if(ui->radioButton_3->isChecked()){
        QMessageBox::information(this,"Selection",ui->radioButton_3->text());
    }

    if(ui->radioButton_4->isChecked()){
        QMessageBox::information(this,"Selection",ui->radioButton_4->text());
    }
}
