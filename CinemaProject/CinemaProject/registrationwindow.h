#ifndef REGISTRATIONWINDOW_H
#define REGISTRATIONWINDOW_H

#include <QDialog>

namespace Ui {
class RegistrationWindow;
}

class RegistrationWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrationWindow(QWidget *parent = nullptr);
    ~RegistrationWindow();

private slots:
    void pushButton_register();
    void infosave();
    void thecheckboxifs(bool &usergenrescheck);
private:
    Ui::RegistrationWindow *ui;
};

#endif // REGISTRATIONWINDOW_H
