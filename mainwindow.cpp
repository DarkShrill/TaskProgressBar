#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer;
    timer-> setInterval (1000); // Set the time interval

    // Create a taskbar button that shows the progress
    windowsTaskbarButton = new QWinTaskbarButton(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::onTimeout);
    connect(ui->Btn_Start, &QAbstractButton::clicked, this, &MainWindow::onButtonClicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onButtonClicked()
{
    // Associate the taskbar button to the progress bar, assuming the progress bar is its own window
    windowsTaskbarButton->setWindow(windowHandle());
    windowsTaskbarProgress = windowsTaskbarButton->progress();
    windowsTaskbarProgress->setRange(0, 100);
    timer->start();
}

void MainWindow::onTimeout()
{
    // When the value of the progress bar changes, change the progress value in the task bar
    windowsTaskbarProgress->setValue(windowsTaskbarProgress->value() + 20);
    windowsTaskbarProgress->show();
    if (windowsTaskbarProgress->value() > 99) {
       windowsTaskbarProgress->setValue(0);
       timer->stop();
    }
}
