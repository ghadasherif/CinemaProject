#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include <QDialog>

namespace Ui {
class WelcomeWindow;
}

class WelcomeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit WelcomeWindow(QWidget *parent = nullptr, QString username= "", int age= 0 );
    ~WelcomeWindow();
      void setUsername(QString username, QString age);
     // void setAge(int y);

private slots:
    void on_pushButton_logout_clicked();

private:
    Ui::WelcomeWindow *ui;
};

#endif // WELCOMEWINDOW_H
