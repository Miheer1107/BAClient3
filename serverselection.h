#ifndef SERVERSELECTION_H
#define SERVERSELECTION_H

#include <QMainWindow>

namespace Ui {
class ServerSelection;
}

class ServerSelection : public QMainWindow
{
    Q_OBJECT

public:
    explicit ServerSelection(QWidget *parent = 0);
    ~ServerSelection();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ServerSelection *ui;
};

#endif // SERVERSELECTION_H
