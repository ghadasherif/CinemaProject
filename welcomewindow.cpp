#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include <QPixmap>
#include "loginwindow.h"

WelcomeWindow::WelcomeWindow(QWidget *parent, QString username, int age) :
    QDialog(parent),
    ui(new Ui::WelcomeWindow)
{

    ui->setupUi(this);
    QString str= QString:: number(age);
    ui->label_hello->setText( "hello" + username + str);
    QPixmap pix ("/Users/ghadasherif/Desktop/cinema.jpeg");
    int w= ui->label_welcome->width();
    int h= ui->label_welcome->height();
    ui->label_image->setPixmap(pix.scaled(400,400, Qt::KeepAspectRatio));

}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}
void WelcomeWindow::setUsername(QString text, QString text_age){
    ui->label_hello->setText("hello " + text + " " + text_age);

}
//void WelcomeWindow::setAge(int text_age){

//    ui->label_hello->setText("hello " + text_age);

//}

void WelcomeWindow::on_pushButton_logout_clicked()
{
    hide();
    LoginWindow* loginwindow= new LoginWindow(this);
    loginwindow->show();

}

