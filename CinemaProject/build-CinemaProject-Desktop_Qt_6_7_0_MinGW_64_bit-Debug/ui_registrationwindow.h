/********************************************************************************
** Form generated from reading UI file 'registrationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONWINDOW_H
#define UI_REGISTRATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_RegistrationWindow
{
public:
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QGroupBox *groupBox_genres;
    QCheckBox *checkBox_action_2;
    QCheckBox *checkBox_comdey_2;
    QCheckBox *checkBox_romance_2;
    QCheckBox *checkBox_drama_2;
    QCheckBox *checkBox_horror_2;
    QCheckBox *checkBox_other_2;
    QGroupBox *groupBox_gender;
    QRadioButton *radioButton_male_2;
    QRadioButton *radioButton_female_2;
    QLabel *label_reenterpass;
    QLineEdit *lineEdit_3_reenterpassword;
    QGroupBox *groupBox_dob;
    QLineEdit *lineEdit_year_2;
    QLineEdit *lineEdit_day_2;
    QLabel *label_day_2;
    QLabel *label_year_2;
    QLabel *label_month_2;
    QComboBox *comboBoxMonth_2;
    QLineEdit *lineEdit_2_password;
    QGroupBox *groupBox_accounttype;
    QRadioButton *radioButton_admin_2;
    QRadioButton *radioButton_user_2;
    QPushButton *pushButton_register;
    QLabel *label_password;

    void setupUi(QDialog *RegistrationWindow)
    {
        if (RegistrationWindow->objectName().isEmpty())
            RegistrationWindow->setObjectName("RegistrationWindow");
        RegistrationWindow->resize(400, 426);
        label_username = new QLabel(RegistrationWindow);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(20, 21, 91, 16));
        lineEdit_username = new QLineEdit(RegistrationWindow);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(170, 20, 113, 21));
        groupBox_genres = new QGroupBox(RegistrationWindow);
        groupBox_genres->setObjectName("groupBox_genres");
        groupBox_genres->setGeometry(QRect(20, 291, 221, 81));
        checkBox_action_2 = new QCheckBox(groupBox_genres);
        checkBox_action_2->setObjectName("checkBox_action_2");
        checkBox_action_2->setGeometry(QRect(10, 20, 71, 18));
        checkBox_comdey_2 = new QCheckBox(groupBox_genres);
        checkBox_comdey_2->setObjectName("checkBox_comdey_2");
        checkBox_comdey_2->setGeometry(QRect(10, 40, 81, 18));
        checkBox_romance_2 = new QCheckBox(groupBox_genres);
        checkBox_romance_2->setObjectName("checkBox_romance_2");
        checkBox_romance_2->setGeometry(QRect(10, 60, 71, 18));
        checkBox_drama_2 = new QCheckBox(groupBox_genres);
        checkBox_drama_2->setObjectName("checkBox_drama_2");
        checkBox_drama_2->setGeometry(QRect(130, 20, 61, 18));
        checkBox_horror_2 = new QCheckBox(groupBox_genres);
        checkBox_horror_2->setObjectName("checkBox_horror_2");
        checkBox_horror_2->setGeometry(QRect(130, 40, 61, 18));
        checkBox_other_2 = new QCheckBox(groupBox_genres);
        checkBox_other_2->setObjectName("checkBox_other_2");
        checkBox_other_2->setGeometry(QRect(130, 60, 71, 18));
        groupBox_gender = new QGroupBox(RegistrationWindow);
        groupBox_gender->setObjectName("groupBox_gender");
        groupBox_gender->setGeometry(QRect(20, 201, 120, 80));
        radioButton_male_2 = new QRadioButton(groupBox_gender);
        radioButton_male_2->setObjectName("radioButton_male_2");
        radioButton_male_2->setGeometry(QRect(30, 50, 69, 18));
        radioButton_female_2 = new QRadioButton(groupBox_gender);
        radioButton_female_2->setObjectName("radioButton_female_2");
        radioButton_female_2->setGeometry(QRect(30, 30, 69, 18));
        label_reenterpass = new QLabel(RegistrationWindow);
        label_reenterpass->setObjectName("label_reenterpass");
        label_reenterpass->setGeometry(QRect(20, 81, 111, 16));
        lineEdit_3_reenterpassword = new QLineEdit(RegistrationWindow);
        lineEdit_3_reenterpassword->setObjectName("lineEdit_3_reenterpassword");
        lineEdit_3_reenterpassword->setGeometry(QRect(170, 80, 113, 21));
        lineEdit_3_reenterpassword->setEchoMode(QLineEdit::Password);
        groupBox_dob = new QGroupBox(RegistrationWindow);
        groupBox_dob->setObjectName("groupBox_dob");
        groupBox_dob->setGeometry(QRect(20, 110, 241, 81));
        lineEdit_year_2 = new QLineEdit(groupBox_dob);
        lineEdit_year_2->setObjectName("lineEdit_year_2");
        lineEdit_year_2->setGeometry(QRect(160, 50, 51, 21));
        lineEdit_day_2 = new QLineEdit(groupBox_dob);
        lineEdit_day_2->setObjectName("lineEdit_day_2");
        lineEdit_day_2->setGeometry(QRect(90, 50, 51, 21));
        label_day_2 = new QLabel(groupBox_dob);
        label_day_2->setObjectName("label_day_2");
        label_day_2->setGeometry(QRect(90, 30, 40, 21));
        label_year_2 = new QLabel(groupBox_dob);
        label_year_2->setObjectName("label_year_2");
        label_year_2->setGeometry(QRect(160, 30, 51, 21));
        label_month_2 = new QLabel(groupBox_dob);
        label_month_2->setObjectName("label_month_2");
        label_month_2->setGeometry(QRect(20, 30, 37, 21));
        comboBoxMonth_2 = new QComboBox(groupBox_dob);
        comboBoxMonth_2->addItem(QString());
        comboBoxMonth_2->addItem(QString());
        comboBoxMonth_2->addItem(QString());
        comboBoxMonth_2->addItem(QString());
        comboBoxMonth_2->addItem(QString());
        comboBoxMonth_2->addItem(QString());
        comboBoxMonth_2->addItem(QString());
        comboBoxMonth_2->addItem(QString());
        comboBoxMonth_2->addItem(QString());
        comboBoxMonth_2->addItem(QString());
        comboBoxMonth_2->addItem(QString());
        comboBoxMonth_2->addItem(QString());
        comboBoxMonth_2->setObjectName("comboBoxMonth_2");
        comboBoxMonth_2->setGeometry(QRect(20, 50, 51, 22));
        lineEdit_2_password = new QLineEdit(RegistrationWindow);
        lineEdit_2_password->setObjectName("lineEdit_2_password");
        lineEdit_2_password->setGeometry(QRect(170, 50, 113, 21));
        lineEdit_2_password->setEchoMode(QLineEdit::Password);
        groupBox_accounttype = new QGroupBox(RegistrationWindow);
        groupBox_accounttype->setObjectName("groupBox_accounttype");
        groupBox_accounttype->setGeometry(QRect(160, 201, 120, 80));
        radioButton_admin_2 = new QRadioButton(groupBox_accounttype);
        radioButton_admin_2->setObjectName("radioButton_admin_2");
        radioButton_admin_2->setGeometry(QRect(30, 50, 69, 18));
        radioButton_user_2 = new QRadioButton(groupBox_accounttype);
        radioButton_user_2->setObjectName("radioButton_user_2");
        radioButton_user_2->setGeometry(QRect(30, 30, 69, 18));
        pushButton_register = new QPushButton(RegistrationWindow);
        pushButton_register->setObjectName("pushButton_register");
        pushButton_register->setGeometry(QRect(20, 391, 80, 21));
        label_password = new QLabel(RegistrationWindow);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(20, 51, 61, 16));

        retranslateUi(RegistrationWindow);

        QMetaObject::connectSlotsByName(RegistrationWindow);
    } // setupUi

    void retranslateUi(QDialog *RegistrationWindow)
    {
        RegistrationWindow->setWindowTitle(QCoreApplication::translate("RegistrationWindow", "Dialog", nullptr));
        label_username->setText(QCoreApplication::translate("RegistrationWindow", "Username: ", nullptr));
        groupBox_genres->setTitle(QCoreApplication::translate("RegistrationWindow", "Favourite Genre(s)", nullptr));
        checkBox_action_2->setText(QCoreApplication::translate("RegistrationWindow", "Action", nullptr));
        checkBox_comdey_2->setText(QCoreApplication::translate("RegistrationWindow", "Comedy", nullptr));
        checkBox_romance_2->setText(QCoreApplication::translate("RegistrationWindow", "Romance", nullptr));
        checkBox_drama_2->setText(QCoreApplication::translate("RegistrationWindow", "Drama", nullptr));
        checkBox_horror_2->setText(QCoreApplication::translate("RegistrationWindow", "Horror", nullptr));
        checkBox_other_2->setText(QCoreApplication::translate("RegistrationWindow", "Other", nullptr));
        groupBox_gender->setTitle(QCoreApplication::translate("RegistrationWindow", "Gender", nullptr));
        radioButton_male_2->setText(QCoreApplication::translate("RegistrationWindow", "Male", nullptr));
        radioButton_female_2->setText(QCoreApplication::translate("RegistrationWindow", "Female", nullptr));
        label_reenterpass->setText(QCoreApplication::translate("RegistrationWindow", "Re-Enter Password: ", nullptr));
        groupBox_dob->setTitle(QCoreApplication::translate("RegistrationWindow", "Date of birth", nullptr));
        label_day_2->setText(QCoreApplication::translate("RegistrationWindow", "Day", nullptr));
        label_year_2->setText(QCoreApplication::translate("RegistrationWindow", "Year ", nullptr));
        label_month_2->setText(QCoreApplication::translate("RegistrationWindow", "Month", nullptr));
        comboBoxMonth_2->setItemText(0, QCoreApplication::translate("RegistrationWindow", "Jan", nullptr));
        comboBoxMonth_2->setItemText(1, QCoreApplication::translate("RegistrationWindow", "Feb", nullptr));
        comboBoxMonth_2->setItemText(2, QCoreApplication::translate("RegistrationWindow", "Mar", nullptr));
        comboBoxMonth_2->setItemText(3, QCoreApplication::translate("RegistrationWindow", "Apr", nullptr));
        comboBoxMonth_2->setItemText(4, QCoreApplication::translate("RegistrationWindow", "May", nullptr));
        comboBoxMonth_2->setItemText(5, QCoreApplication::translate("RegistrationWindow", "Jun", nullptr));
        comboBoxMonth_2->setItemText(6, QCoreApplication::translate("RegistrationWindow", "Jul", nullptr));
        comboBoxMonth_2->setItemText(7, QCoreApplication::translate("RegistrationWindow", "Aug", nullptr));
        comboBoxMonth_2->setItemText(8, QCoreApplication::translate("RegistrationWindow", "Sep", nullptr));
        comboBoxMonth_2->setItemText(9, QCoreApplication::translate("RegistrationWindow", "Oct", nullptr));
        comboBoxMonth_2->setItemText(10, QCoreApplication::translate("RegistrationWindow", "Nov", nullptr));
        comboBoxMonth_2->setItemText(11, QCoreApplication::translate("RegistrationWindow", "Dec", nullptr));

        groupBox_accounttype->setTitle(QCoreApplication::translate("RegistrationWindow", "Account Type", nullptr));
        radioButton_admin_2->setText(QCoreApplication::translate("RegistrationWindow", "Admin", nullptr));
        radioButton_user_2->setText(QCoreApplication::translate("RegistrationWindow", "User", nullptr));
        pushButton_register->setText(QCoreApplication::translate("RegistrationWindow", "Register", nullptr));
        label_password->setText(QCoreApplication::translate("RegistrationWindow", "Password: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationWindow: public Ui_RegistrationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONWINDOW_H
