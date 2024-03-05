#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include <QPixmap>

WelcomeWindow::WelcomeWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/dalia/Desktop/Spring 2024 semester/CS2 lab/Assignments/Assignment QT/welcomephoto.jpg");
    ui->label_photowelcome->setPixmap(pix.scaled(540, 360));
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}
