#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "usercreds.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void openUsercreds();

private slots:
    void on_pushButton_clicked();



    void on_lineEdit_editingFinished();

private:
    Ui::MainWindow *ui;
    usercreds *myusercreds;
};

#endif // MAINWINDOW_H
