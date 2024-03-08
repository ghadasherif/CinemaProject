#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "Users.h"
#include "welcomewindow.h"

RegisterWindow::RegisterWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
      ui->labelexist->setVisible(false);
      ui->labelnotmatch->setVisible(false);
      ui->labelagerestrict->setVisible(false);
      ui->labelregistererror->setVisible(false);


}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}
//void RegisterWindow::setUsername(QString username){
//    ui->label_hello->setText("hello " + text);

//}
void RegisterWindow::on_pushButtonRegister_clicked()
{
    QString username = ui->lineEditusername->text();
    QString password = ui->lineEditpassword->text();
    QString retype = ui->lineEditretype->text();
    QString day = ui->lineEdit_day->text();
     int x= day.toInt();
    QString year = ui->lineEdit_year->text();
        int y= year.toInt();
    int age= 2024-y;
    QString combobox= ui->comboBoxmonth->currentText();
    bool admin = ui->radioButtonadmin->isChecked();
    bool female = ui->radioButtonadmin->isChecked();
    bool male = ui->radioButtonmale->isChecked();
    bool user = ui->radioButtonuser->isChecked();
    bool action = ui->checkBoxaction->isChecked();
    bool comedy = ui->checkBoxcomedy->isChecked();
    bool romance = ui->checkBoxromance->isChecked();
    bool drama = ui->checkBoxdrama->isChecked();
    bool horror = ui->checkBoxhorror->isChecked();
    bool other = ui->checkBoxother->isChecked();



    for(int i=0;i<100;i++){
        if(usernames[i]== username){
            ui->labelexist->setVisible(true);

        }
    }
       if(password!=retype){
        ui->labelnotmatch->setVisible(true);

        }
      else if(2024-y<12){
            ui->labelagerestrict->setVisible(true);

        }

        else if(username.isEmpty() || password.isEmpty() || retype.isEmpty() || day.isEmpty() || year.isEmpty()) {
            ui->labelregistererror->setVisible(true);

        }
        else {
            usernames[usersCount] = username;
            passwords[usersCount] = password;
            ages[usersCount] = 2024-y;
            QString str= QString:: number(age);
            usersCount++;

            hide();
            WelcomeWindow* welcomewindow= new WelcomeWindow(this);
            welcomewindow->setUsername(username, str);
          //  welcomewindow->setAge(2024-y);
            welcomewindow->show();


        }

        }






