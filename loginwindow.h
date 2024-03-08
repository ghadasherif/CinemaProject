#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H
#include "Users.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class loginWindow;
}
QT_END_NAMESPACE

class loginWindow : public QMainWindow
{
    Q_OBJECT

public:
    loginWindow(QWidget *parent = nullptr);
    ~loginWindow();

private slots:
    void on_loginbutton_2_clicked();

    void on_registerbutton_clicked();

private:
    Ui::loginWindow *ui;
};
#endif // LOGINWINDOW_H
