# Project Description
The project is a desktop application developed using the Qt framework, showing how to use the QWinTaskbarButton class and the QWinTaskbarProgress class to interact with the Windows taskbar.

The GUI of the application consists of a main window containing the "Start" button. By clicking on the "Start" button, the application will start performing a simulated operation and display the Windows taskbar progress bar via the QWinTaskbarProgress class.

## Graphical interface
The GUI of the application consists of the following parts:

- Main Window: contains the "Start" button and the taskbar progress bar.

[![Main Window]()]()
[![Main Window]()]()

## Using the QWinTaskbarButton and QWinTaskbarProgress classes.

The application uses the QWinTaskbarButton and QWinTaskbarProgress classes to interact with the Windows taskbar. The QWinTaskbarButton class is used to create a button on the taskbar that can be used to activate the application when it is clicked. The QWinTaskbarProgress class is used to show the taskbar progress bar when executing the simulated operation.

Here is an example of how the QWinTaskbarButton class is used to create a taskbar button:

```
QWinTaskbarButton *button = new QWinTaskbarButton(this);
button->setWindow(windowHandle());
button->setOverlayIcon(QIcon(":/icons/icon.ico"));
button->setAccessibleDescription("QWinTaskbarButton Example");
```

Here is an example of how the QWinTaskbarProgress class is used to show the progress bar on the taskbar during the execution of the simulated operation:
```
QWinTaskbarProgress *progress = button->progress();
progress->setVisible(true);
progress->setValue(value);
```
## Conclusion
The project "QWinTaskbarButton and QWinTaskbarProgress Example" demonstrates how to use the QWinTaskbarButton and QWinTaskbarProgress classes to interact with the Windows taskbar and display a progress bar while performing an operation.