#ifndef USERCREDS_H
#define USERCREDS_H
#include "serverselection.h"
#include <QMainWindow>

namespace Ui {
class usercreds;
}

class usercreds : public QMainWindow
{
    Q_OBJECT

public:
    explicit usercreds(QWidget *parent = 0);
    ~usercreds();

public slots:
    void openServerSelect();

private slots:
    void on_pushButton_clicked();
private:
    Ui::usercreds *ui;
    ServerSelection *serverselect;
};

#endif // USERCREDS_H
