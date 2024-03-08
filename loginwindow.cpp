#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "Users.h"
#include "registerwindow.h"
#include "welcomwindow.h"

loginWindow::loginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginWindow)
{
    ui->setupUi(this);
    ui->error_label->setVisible( false );
}


loginWindow::~loginWindow()
{
    delete ui;
}

void loginWindow::on_loginbutton_2_clicked()
{
    QString username1 = ui->lineEdit_username->text();
    QString password1 = ui->lineEdit_password->text();

   for (int i=0; i <usersCount ; i++)
    {if ( usernames[i] == username1 && passwords[i]== password1 )
       {
           hide();
           welcomwindow* Welcomewindow = new welcomwindow(this);
           QString str = QString :: number ( ages[i] );

          Welcomewindow->setUsername(username1, str);


           Welcomewindow->show();
       }
       else
           ui->error_label->setVisible( true );

    }
}

void loginWindow::on_registerbutton_clicked()
{
    hide();
    registerwindow* Registerwindow = new registerwindow(this);
    Registerwindow->show();
}

