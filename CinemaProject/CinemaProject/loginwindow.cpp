#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "welcomewindow.h"
#include "registrationwindow.h"
#include "Users.h"


LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->label_error->setVisible(false);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_login_clicked()
{
    for (int i = 0; i<100; i++)
    {
        if ((usernames[i] == ui->lineEdit_username->text()) && (passwords[i] == ui->lineEdit_2_password->text()))
        {
            hide(); //hide current window
            WelcomeWindow* welcomewindow = new WelcomeWindow(usernames[i], ages[i], this); //create the new window
            welcomewindow->show();
            ui->label_error->setVisible(false);
        }
        else
        {
            ui->label_error->setVisible(true);
            //ui->label_error->setText("Error! Wrong username or password!");
        }
    }
}


void LoginWindow::on_pushButton_2_register_clicked()
{
    hide();
    RegistrationWindow* registrationwindow = new RegistrationWindow(this);
    registrationwindow->show();
}

