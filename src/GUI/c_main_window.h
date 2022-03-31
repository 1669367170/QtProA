#pragma once

#include <QDialog>

namespace Ui {
    class mainGUI;
}

class CMainWindow : public QDialog {
Q_OBJECT

public:
    explicit CMainWindow(QWidget *parent = 0);
    ~CMainWindow();

protected:
    bool eventFilter(QObject *watched, QEvent *event);

private:
    Ui::mainGUI *ui;

private slots:
    void initForm();
    void buttonClick();

private slots:
    void on_btnMenu_Min_clicked();
    void on_btnMenu_Max_clicked();
    void on_btnMenu_Close_clicked();
};