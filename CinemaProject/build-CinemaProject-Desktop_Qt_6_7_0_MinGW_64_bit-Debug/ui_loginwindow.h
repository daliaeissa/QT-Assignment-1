/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_username;
    QLabel *label_password;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_2_password;
    QPushButton *pushButton_login;
    QPushButton *pushButton_2_register;
    QLabel *label_error;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuLogin;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(263, 194);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        label_username = new QLabel(centralwidget);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(40, 30, 61, 16));
        label_password = new QLabel(centralwidget);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(40, 60, 51, 16));
        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(110, 29, 113, 21));
        lineEdit_2_password = new QLineEdit(centralwidget);
        lineEdit_2_password->setObjectName("lineEdit_2_password");
        lineEdit_2_password->setGeometry(QRect(110, 59, 113, 21));
        lineEdit_2_password->setEchoMode(QLineEdit::Password);
        pushButton_login = new QPushButton(centralwidget);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(40, 120, 71, 31));
        pushButton_2_register = new QPushButton(centralwidget);
        pushButton_2_register->setObjectName("pushButton_2_register");
        pushButton_2_register->setGeometry(QRect(150, 120, 71, 31));
        label_error = new QLabel(centralwidget);
        label_error->setObjectName("label_error");
        label_error->setGeometry(QRect(40, 90, 181, 20));
        LoginWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 263, 17));
        menuLogin = new QMenu(menubar);
        menuLogin->setObjectName("menuLogin");
        LoginWindow->setMenuBar(menubar);

        menubar->addAction(menuLogin->menuAction());

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        label_username->setText(QCoreApplication::translate("LoginWindow", "Username:", nullptr));
        label_password->setText(QCoreApplication::translate("LoginWindow", "Password: ", nullptr));
        pushButton_login->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        pushButton_2_register->setText(QCoreApplication::translate("LoginWindow", "Register", nullptr));
        label_error->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" font-weight:700; color:#ff0000;\">Error!</span></p></body></html>", nullptr));
        menuLogin->setTitle(QCoreApplication::translate("LoginWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
