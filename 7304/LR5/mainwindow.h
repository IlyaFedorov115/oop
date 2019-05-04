#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "controller.h"
#include <QListWidget>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QListWidget *lstHandlers;
    Controller controller;
    void loadInfo();

private slots:
    void btnReplace_clicked();
    void btnHandle_clicked();
    void actionSave_triggered();
    void actionLoad_triggered();
};

#endif // MAINWINDOW_H
