/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QLabel *label_username;
    QLabel *label_password;
    QLabel *label_reenterpass;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_2_password;
    QLineEdit *lineEdit_3_reenterpassword;
    QGroupBox *groupBox_gender;
    QRadioButton *radioButton_male;
    QRadioButton *radioButton_female;
    QGroupBox *groupBox_accounttype;
    QRadioButton *radioButton_admin;
    QRadioButton *radioButton_user;
    QGroupBox *groupBox_dob;
    QLineEdit *lineEdit_year;
    QLineEdit *lineEdit_day;
    QLabel *label_day;
    QLabel *label_year;
    QLabel *label_month;
    QComboBox *comboBoxMonth;
    QGroupBox *groupBox_genres;
    QCheckBox *checkBox_action;
    QCheckBox *checkBox_comdey;
    QCheckBox *checkBox_romance;
    QCheckBox *checkBox_drama;
    QCheckBox *checkBox_horror;
    QCheckBox *checkBox_other;
    QPushButton *pushButton_register;

    void setupUi(QWidget *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(400, 427);
        label_username = new QLabel(RegisterWindow);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(20, 20, 51, 16));
        label_password = new QLabel(RegisterWindow);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(20, 50, 51, 16));
        label_reenterpass = new QLabel(RegisterWindow);
        label_reenterpass->setObjectName("label_reenterpass");
        label_reenterpass->setGeometry(QRect(20, 80, 81, 16));
        lineEdit_username = new QLineEdit(RegisterWindow);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(120, 19, 113, 21));
        lineEdit_2_password = new QLineEdit(RegisterWindow);
        lineEdit_2_password->setObjectName("lineEdit_2_password");
        lineEdit_2_password->setGeometry(QRect(120, 49, 113, 21));
        lineEdit_2_password->setEchoMode(QLineEdit::Password);
        lineEdit_3_reenterpassword = new QLineEdit(RegisterWindow);
        lineEdit_3_reenterpassword->setObjectName("lineEdit_3_reenterpassword");
        lineEdit_3_reenterpassword->setGeometry(QRect(120, 79, 113, 21));
        lineEdit_3_reenterpassword->setEchoMode(QLineEdit::Password);
        groupBox_gender = new QGroupBox(RegisterWindow);
        groupBox_gender->setObjectName("groupBox_gender");
        groupBox_gender->setGeometry(QRect(20, 200, 120, 80));
        radioButton_male = new QRadioButton(groupBox_gender);
        radioButton_male->setObjectName("radioButton_male");
        radioButton_male->setGeometry(QRect(30, 50, 69, 18));
        radioButton_female = new QRadioButton(groupBox_gender);
        radioButton_female->setObjectName("radioButton_female");
        radioButton_female->setGeometry(QRect(30, 30, 69, 18));
        groupBox_accounttype = new QGroupBox(RegisterWindow);
        groupBox_accounttype->setObjectName("groupBox_accounttype");
        groupBox_accounttype->setGeometry(QRect(160, 200, 120, 80));
        radioButton_admin = new QRadioButton(groupBox_accounttype);
        radioButton_admin->setObjectName("radioButton_admin");
        radioButton_admin->setGeometry(QRect(30, 50, 69, 18));
        radioButton_user = new QRadioButton(groupBox_accounttype);
        radioButton_user->setObjectName("radioButton_user");
        radioButton_user->setGeometry(QRect(30, 30, 69, 18));
        groupBox_dob = new QGroupBox(RegisterWindow);
        groupBox_dob->setObjectName("groupBox_dob");
        groupBox_dob->setGeometry(QRect(20, 109, 241, 81));
        lineEdit_year = new QLineEdit(groupBox_dob);
        lineEdit_year->setObjectName("lineEdit_year");
        lineEdit_year->setGeometry(QRect(160, 50, 51, 21));
        lineEdit_day = new QLineEdit(groupBox_dob);
        lineEdit_day->setObjectName("lineEdit_day");
        lineEdit_day->setGeometry(QRect(90, 50, 51, 21));
        label_day = new QLabel(groupBox_dob);
        label_day->setObjectName("label_day");
        label_day->setGeometry(QRect(90, 30, 40, 21));
        label_year = new QLabel(groupBox_dob);
        label_year->setObjectName("label_year");
        label_year->setGeometry(QRect(160, 30, 51, 21));
        label_month = new QLabel(groupBox_dob);
        label_month->setObjectName("label_month");
        label_month->setGeometry(QRect(20, 30, 37, 21));
        comboBoxMonth = new QComboBox(groupBox_dob);
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->setObjectName("comboBoxMonth");
        comboBoxMonth->setGeometry(QRect(20, 50, 51, 22));
        groupBox_genres = new QGroupBox(RegisterWindow);
        groupBox_genres->setObjectName("groupBox_genres");
        groupBox_genres->setGeometry(QRect(20, 290, 161, 81));
        checkBox_action = new QCheckBox(groupBox_genres);
        checkBox_action->setObjectName("checkBox_action");
        checkBox_action->setGeometry(QRect(10, 20, 58, 18));
        checkBox_comdey = new QCheckBox(groupBox_genres);
        checkBox_comdey->setObjectName("checkBox_comdey");
        checkBox_comdey->setGeometry(QRect(10, 40, 58, 18));
        checkBox_romance = new QCheckBox(groupBox_genres);
        checkBox_romance->setObjectName("checkBox_romance");
        checkBox_romance->setGeometry(QRect(10, 60, 58, 18));
        checkBox_drama = new QCheckBox(groupBox_genres);
        checkBox_drama->setObjectName("checkBox_drama");
        checkBox_drama->setGeometry(QRect(90, 20, 58, 18));
        checkBox_horror = new QCheckBox(groupBox_genres);
        checkBox_horror->setObjectName("checkBox_horror");
        checkBox_horror->setGeometry(QRect(90, 40, 58, 18));
        checkBox_other = new QCheckBox(groupBox_genres);
        checkBox_other->setObjectName("checkBox_other");
        checkBox_other->setGeometry(QRect(90, 60, 58, 18));
        pushButton_register = new QPushButton(RegisterWindow);
        pushButton_register->setObjectName("pushButton_register");
        pushButton_register->setGeometry(QRect(20, 390, 80, 21));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QWidget *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Form", nullptr));
        label_username->setText(QCoreApplication::translate("RegisterWindow", "Username: ", nullptr));
        label_password->setText(QCoreApplication::translate("RegisterWindow", "Password: ", nullptr));
        label_reenterpass->setText(QCoreApplication::translate("RegisterWindow", "Re-Enter Password: ", nullptr));
        groupBox_gender->setTitle(QCoreApplication::translate("RegisterWindow", "Gender", nullptr));
        radioButton_male->setText(QCoreApplication::translate("RegisterWindow", "Male", nullptr));
        radioButton_female->setText(QCoreApplication::translate("RegisterWindow", "Female", nullptr));
        groupBox_accounttype->setTitle(QCoreApplication::translate("RegisterWindow", "Account Type", nullptr));
        radioButton_admin->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        radioButton_user->setText(QCoreApplication::translate("RegisterWindow", "User", nullptr));
        groupBox_dob->setTitle(QCoreApplication::translate("RegisterWindow", "Date of birth", nullptr));
        label_day->setText(QCoreApplication::translate("RegisterWindow", "Day", nullptr));
        label_year->setText(QCoreApplication::translate("RegisterWindow", "Year ", nullptr));
        label_month->setText(QCoreApplication::translate("RegisterWindow", "Month", nullptr));
        comboBoxMonth->setItemText(0, QCoreApplication::translate("RegisterWindow", "Jan", nullptr));
        comboBoxMonth->setItemText(1, QCoreApplication::translate("RegisterWindow", "Feb", nullptr));
        comboBoxMonth->setItemText(2, QCoreApplication::translate("RegisterWindow", "Mar", nullptr));
        comboBoxMonth->setItemText(3, QCoreApplication::translate("RegisterWindow", "Apr", nullptr));
        comboBoxMonth->setItemText(4, QCoreApplication::translate("RegisterWindow", "May", nullptr));
        comboBoxMonth->setItemText(5, QCoreApplication::translate("RegisterWindow", "Jun", nullptr));
        comboBoxMonth->setItemText(6, QCoreApplication::translate("RegisterWindow", "Jul", nullptr));
        comboBoxMonth->setItemText(7, QCoreApplication::translate("RegisterWindow", "Aug", nullptr));
        comboBoxMonth->setItemText(8, QCoreApplication::translate("RegisterWindow", "Sep", nullptr));
        comboBoxMonth->setItemText(9, QCoreApplication::translate("RegisterWindow", "Oct", nullptr));
        comboBoxMonth->setItemText(10, QCoreApplication::translate("RegisterWindow", "Nov", nullptr));
        comboBoxMonth->setItemText(11, QCoreApplication::translate("RegisterWindow", "Dec", nullptr));

        groupBox_genres->setTitle(QCoreApplication::translate("RegisterWindow", "Favourite Genre(s)", nullptr));
        checkBox_action->setText(QCoreApplication::translate("RegisterWindow", "Action", nullptr));
        checkBox_comdey->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        checkBox_romance->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        checkBox_drama->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        checkBox_horror->setText(QCoreApplication::translate("RegisterWindow", "Horror", nullptr));
        checkBox_other->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
        pushButton_register->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
