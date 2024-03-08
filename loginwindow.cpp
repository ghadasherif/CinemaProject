#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "welcomewindow.h"
#include "Users.h"
#include "registerwindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->labelerror->setVisible(false);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}


void LoginWindow::on_pushButton_login_clicked()
{

    QString enteredUsername= ui->lineEditusername->text();
    QString enteredpassword=ui->lineEditpassword->text();

    for(int i=0; i<usersCount;i++){
        if(usernames[i] == enteredUsername && passwords[i]== enteredpassword) {
            hide();
        WelcomeWindow* welcomewindow= new WelcomeWindow(this);
            QString str= QString:: number(ages[i]);
            welcomewindow->setUsername(enteredUsername,str);
        welcomewindow->show();
        }
        else {
        ui->labelerror->show();
        }

    }

}


void LoginWindow::on_pushButton_register_clicked()
{
    hide();
    RegisterWindow* registerwindow= new RegisterWindow(this);
     //  registerwindow->setUsername(enteredUsername+ " ");
   // registerwindow->setUsername();
   // registerwindow->setAge(ages);
   registerwindow->show();
}

