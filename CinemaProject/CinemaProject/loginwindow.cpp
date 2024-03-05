#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "welcomewindow.h"
#include "registrationwindow.h"


LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_login_clicked()
{
    hide(); //hide current window
    WelcomeWindow* welcomewindow = new WelcomeWindow(this); //create the new window
    welcomewindow->show();
}


void LoginWindow::on_pushButton_2_register_clicked()
{
    hide();
    RegistrationWindow* registrationwindow = new RegistrationWindow(this);
    registrationwindow->show();
}

