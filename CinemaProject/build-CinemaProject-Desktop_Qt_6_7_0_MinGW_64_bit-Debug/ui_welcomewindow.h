/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QLabel *label_hello;
    QLabel *label_welcome;
    QLabel *label_photowelcome;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(492, 356);
        label_hello = new QLabel(WelcomeWindow);
        label_hello->setObjectName("label_hello");
        label_hello->setGeometry(QRect(30, 20, 61, 16));
        label_welcome = new QLabel(WelcomeWindow);
        label_welcome->setObjectName("label_welcome");
        label_welcome->setGeometry(QRect(130, 60, 181, 41));
        label_photowelcome = new QLabel(WelcomeWindow);
        label_photowelcome->setObjectName("label_photowelcome");
        label_photowelcome->setGeometry(QRect(36, 51, 421, 251));
        label_hello->raise();
        label_photowelcome->raise();
        label_welcome->raise();

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Dialog", nullptr));
        label_hello->setText(QCoreApplication::translate("WelcomeWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Hello </span></p></body></html>", nullptr));
        label_welcome->setText(QCoreApplication::translate("WelcomeWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\">Welcome!</span></p></body></html>", nullptr));
        label_photowelcome->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
