#include "registrationwindow.h"
#include "ui_registrationwindow.h"
#include "Users.h"
#include "welcomewindow.h"

RegistrationWindow::RegistrationWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegistrationWindow)
{
    ui->setupUi(this);

    ui->lineEdit_username->setVisible(false);
    ui->lineEdit_2_password->setVisible(false);
    ui->lineEdit_3_reenterpassword->setVisible(false);
    ui->pushButton_register->setVisible(false);
}

void RegistrationWindow::thecheckboxifs(bool &usergenrescheck)
{
    QString chosengenres[6];

    if(ui->checkBox_action_2->isChecked())
    {
        chosengenres[0] = ui->checkBox_action_2->text();
        usergenrescheck = true;
    }

    if(ui->checkBox_comdey_2->isChecked())
    {
        chosengenres[1] = ui->checkBox_comdey_2->text();
        usergenrescheck = true;
    }

    if(ui->checkBox_drama_2->isChecked())
    {
        chosengenres[2] = ui->checkBox_drama_2->text();
        usergenrescheck = true;
    }

    if(ui->checkBox_romance_2->isChecked())
    {
        chosengenres[3] = ui->checkBox_romance_2->text();
        usergenrescheck = true;
    }

    if(ui->checkBox_horror_2->isChecked())
    {
        chosengenres[4] = ui->checkBox_horror_2->text();
        usergenrescheck = true;
    }

    if(ui->checkBox_other_2->isChecked())
    {
        chosengenres[5] = ui->checkBox_other_2->text();
        usergenrescheck = true;
    }
}

void RegistrationWindow::infosave()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_2_password->text();
    QString retypepassword = ui->lineEdit_3_reenterpassword->text();
    QString month = ui->comboBoxMonth_2->currentText();
    int day = ui->lineEdit_day_2->text().toInt();
    int year = ui->lineEdit_year_2->text().toInt();
    QString gender = "";
    QString accounttype = "";
    bool usernamecheck = true;
    bool userpasswordcheck = true;
    bool useragecheck = true;
    bool usergenrescheck = false;
    bool userfillcheck = true;

    if(ui->radioButton_male_2->isChecked())
        gender = "Male";
    else if(ui->radioButton_male_2->isChecked())
        gender = "Femal";

    if(ui->radioButton_user_2->isChecked())
        accounttype = "user";
    if(ui->radioButton_admin_2->isChecked())
        accounttype = "admin";

    for(int i = 0; i < userscount; i++)
    {
        if(username == usernames[i])
        {
            ui->usernameerrorlabel->setVisible(true);
            usernamecheck = false;
        }

    }

    thecheckboxifs(usergenrescheck);

    if(password != retypepassword)
    {
        ui->lineEdit_3_reenterpassword->setVisible(true);
        userpasswordcheck = false;
    }

    if(2024 - year < 12)
    {
        ui->ageerrorlabel->setVisible(true);
        useragecheck = false;
    }

    if(username == "" || password == "" || retypepassword == "" || month == "" || day == 0 || year == 0 || gender == "" || accounttype == "" || usergenrescheck == false)
    {
        ui->registererrorlabel->setVisible(true);
    }

    else if (usernamecheck == true && userpasswordcheck == true && useragecheck == true && userfillcheck == true && usergenrescheck == true)
    {
        usernames[userscount] = username;
        passwords[userscount] = password;
        ages[userscount] = 2024 - year;

        userscount++;

        hide();
        WelcomeWindow* W = new WelcomeWindow(usernames[userscount-1],ages[userscount-1],this);
        W->show();

    }

}


void RegistrationWindow::pushButton_register()
{
    ui->lineEdit_username->setVisible(false);
    ui->lineEdit_2_password->setVisible(false);
    ui->lineEdit_3_reenterpassword->setVisible(false);
    ui->pushButton_register->setVisible(false);
    infosave();
}


RegistrationWindow::~RegistrationWindow()
{
    delete ui;
}

// void RegistrationWindow::on_pushButton_register_clicked()
// {
//     connect(ui->pushButton_register, on_pushButton_register_clicked()::clicked, this, &Ui::RegistrationWindow::pushButton_register);
//     initializeUI();
// }

