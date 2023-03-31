#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QWinTaskbarProgress>
#include <QWinTaskbarButton>
#include <QAbstractButton>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:

    void onButtonClicked();

    void onTimeout();
private:

    Ui::MainWindow *ui;

    QTimer *timer;

    QWinTaskbarButton *windowsTaskbarButton;

    QWinTaskbarProgress *windowsTaskbarProgress;
};

#endif // MAINWINDOW_H
