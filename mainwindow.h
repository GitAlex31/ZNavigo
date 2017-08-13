#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();

private:
    void createActions();
    void createMenus();
    void createToolBar();
    void createCentralZone();

private slots:

private:
    // Toolbar's widgets
    QAction *previousPageAction;
    QAction *nextPageAction;
    QAction *stopAction;
    QAction *refreshAction;
    QAction *homeAction;
    QLineEdit *urlLineEdit;
    QAction *loadAction;

    // File menu widgets
    QAction *quitAction;

};

#endif // MAINWINDOW_H
