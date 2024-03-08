#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "Users.h"
#include "welcomwindow.h"
#include "ui_welcomwindow.h"

registerwindow::registerwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registerwindow)
{
    ui->setupUi(this);
    ui -> user_error -> setVisible (false );
    ui -> passowrd_error -> setVisible (false );
    ui -> age_error -> setVisible (false );
    ui -> register_error -> setVisible (false );
    ui->month_2->addItem("Jan");
    ui->month_2->addItem("Feb");
    ui->month_2->addItem("Mach");
    ui->month_2->addItem("Apr");
    ui->month_2->addItem("May");
    ui->month_2->addItem("June");
    ui->month_2->addItem("July");
    ui->month_2->addItem("Augs");
    ui->month_2->addItem("Sept");
    ui->month_2->addItem("Oct");
    ui->month_2->addItem("Nov");
    ui->month_2->addItem("Dec");


}

registerwindow::~registerwindow()
{
    delete ui;
}

void registerwindow::on_regsiter_button_clicked()
{

     QString username1 = ui->lineEdit_user->text();
     QString password = ui->password_linedit->text();
     QString repassword = ui->repassword_linedit->text();
     QString day= ui->day_2->text();
     int day_int = day.toInt();
     QString year = ui->year_2->text();
     int year_int = year.toInt();
     int age = 2024-year_int;

     QString month = ui->month_2->currentText();
     //gender
     bool male= ui->male_2->isChecked();
     bool female= ui->female_2->isChecked();
     //
     bool user= ui->user_2->isChecked();
     bool admin= ui->admin_2->isChecked();

     //Favorite Genre
     bool action= ui->action_2->isChecked();
     bool comedy= ui->comedy_2->isChecked();
      bool romance= ui->romance_2->isChecked();
       bool drama= ui->drama_2->isChecked();
      bool horror= ui->horror_2->isChecked();
        bool other= ui->other_2->isChecked();


       for(int i=0;i<100;i++)
        {
       if(usernames[i]==username1 )
           {
                ui -> user_error -> setVisible (true );
           }
       }
       if(password!=repassword)
        {
          ui -> passowrd_error -> setVisible (true );
        }
        else if (2024-year_int<12)
        {
            ui -> age_error -> setVisible (true );
        }
        else if (username1.isEmpty() || password.isEmpty()  || repassword.isEmpty() || day.isEmpty() ||year.isEmpty())
        {
            ui -> register_error -> setVisible (true );
        }
        else {
            usernames[usersCount]=username1;
            passwords[usersCount]=password;
            ages[usersCount]=(age);
            QString str = QString :: number ( age );

            usersCount++;

            hide();
            welcomwindow* Welcomewindow = new welcomwindow(this);
            Welcomewindow->setUsername(username1, str);
            Welcomewindow->show();


        }

 }


void registerwindow::on_regsiter_button_released()
{
    ui -> user_error -> setVisible (false );
    ui -> passowrd_error -> setVisible (false );
    ui -> age_error -> setVisible (false );
    ui -> register_error -> setVisible (false );
}

