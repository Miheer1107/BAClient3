#include "usercreds.h"
#include "ui_usercreds.h"
#include<QMessageBox>
usercreds::usercreds(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::usercreds)
{
    ui->setupUi(this);
    this->setWindowTitle("Digital Vault");
    this->setFixedSize(QSize(400, 300));

}

usercreds::~usercreds()
{
    delete ui;
}


void usercreds::openServerSelect(){
    if((ui->lineEdit->text()!=NULL)&&(ui->lineEdit_2->text()!=NULL)){

        std::string username;
        username=ui->lineEdit->text().toStdString();

        std::string password;
        password=ui->lineEdit_2->text().toStdString();

        QString str;

        str = QString("Username: %1\nPassword: %2\n").arg(QString::fromStdString(username)).arg(QString::fromStdString(password));
        QMessageBox::information(this, "Credentials", str);



        this->hide();
        serverselect = new ServerSelection();
        serverselect->show();
    }



}

void usercreds::on_pushButton_clicked()
{
    openServerSelect();
}
