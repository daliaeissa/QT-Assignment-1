#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include <QPixmap>
#include <QString>
#include "loginwindow.h"

WelcomeWindow::WelcomeWindow(QString username, int age, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
    // QString username; //add in constructor as parameters
    // int age;
    QString str = QString :: number ( age );
    ui->label_hello->setText("Hello " + username + " " + str);

    QPixmap pix("C:/Users/dalia/Desktop/Spring 2024 semester/CS2 lab/Assignments/Assignment QT/welcomephoto.jpg");
    int w = ui->label_photowelcome->width();
    int h= ui->label_photowelcome->height();
    ui->label_photowelcome->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}

void WelcomeWindow::on_pushButton_logout_clicked()
{
    hide();
    LoginWindow* loginwindow = new LoginWindow;
    loginwindow->show();
}

