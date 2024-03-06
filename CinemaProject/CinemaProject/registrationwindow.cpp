#include "registrationwindow.h"
#include "ui_registrationwindow.h"

RegistrationWindow::RegistrationWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegistrationWindow)
{
    ui->setupUi(this);
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

