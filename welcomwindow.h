#ifndef WELCOMWINDOW_H
#define WELCOMWINDOW_H
#include "Users.h"
#include <QDialog>

namespace Ui {
class welcomwindow;
}

class welcomwindow : public QDialog
{
    Q_OBJECT

public:
    explicit welcomwindow(QWidget *parent = nullptr,QString username=" ", int age=9);
    ~welcomwindow();
    void setUsername(QString text , QString string_age);


private slots:
    void on_logout_botton_clicked();

private:
    Ui::welcomwindow *ui;
};

#endif // WELCOMWINDOW_H
