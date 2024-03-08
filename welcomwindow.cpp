#include "welcomwindow.h"
#include "ui_welcomwindow.h"
#include "Users.h"
#include "registerwindow.h"
#include "loginwindow.h"
#include "ui_loginwindow.h"



welcomwindow::welcomwindow(QWidget *parent,QString username1, int age)
    : QDialog(parent)
    , ui(new Ui::welcomwindow)
{
    //username = ui->lineEdit_username->text();
    ui->setupUi(this);
    QString str = QString :: number ( age );
    ui->hello_label->setText("hello"+ username1 +str);
    QPixmap pix ("C:\\Users\\xahra\\Documents\\welcomeimage.png");
    int w =ui->image->width();
    int h =ui->image->height();
    ui ->image->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));
}

welcomwindow::~welcomwindow()
{
    delete ui;
}

void welcomwindow::on_logout_botton_clicked()
{
    {
        hide();
        loginWindow* LoginWindow = new loginWindow(this);
        LoginWindow->show();
    }
}

void welcomwindow::setUsername(QString text ,QString age_text){
    ui->hello_label->setText("hello "+text+" "+ age_text);
}

