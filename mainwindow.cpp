#include <mainwindow.h>

MainWindow::MainWindow()
{
    createActions();
    createMenus();
    createToolBar();
    createCentralZone();
    resize(800,500);
}

void MainWindow::createActions()
{
    // Create the QActions
    previousPageAction = new QAction("Go &back", this);
    previousPageAction->setShortcut(QKeySequence(Qt::ALT + Qt::Key_Left));
    previousPageAction->setIcon(QIcon("prec.png"));

    nextPageAction = new QAction("Go &back", this);
    nextPageAction->setShortcut(QKeySequence(Qt::ALT + Qt::Key_Right));
    nextPageAction->setIcon(QIcon("suiv.png"));

    stopAction = new QAction("Stop", this);
    stopAction->setIcon(QIcon("stop.png"));

    refreshAction = new QAction("Refresh", this);
    refreshAction->setIcon(QIcon("actu.png"));

    homeAction = new QAction("Go &home", this);
    homeAction->setIcon(QIcon("home.png"));

    loadAction = new QAction("Load", this);
    loadAction->setIcon(QIcon("go.png"));

    quitAction = new QAction("Quit", this);

    // Connect the QActions
    connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));

}

void MainWindow::createMenus()
{
    QMenu *fileMenu = menuBar()->addMenu("&File");
    QMenu *navigationMenu = menuBar()->addMenu("&Navigation");
    QMenu *aboutMenu = menuBar()->addMenu("&?");

    fileMenu->addAction(quitAction);

    navigationMenu->addAction(previousPageAction);
    navigationMenu->addAction(nextPageAction);
    navigationMenu->addAction(stopAction);
    navigationMenu->addAction(refreshAction);
    navigationMenu->addAction(homeAction);
    navigationMenu->addAction(loadAction);

}

void MainWindow::createToolBar()
{
    QToolBar *toolBar = addToolBar("Toolbar");
    urlLineEdit = new QLineEdit;

    toolBar->addAction(previousPageAction);
    toolBar->addAction(nextPageAction);
    toolBar->addAction(stopAction);
    toolBar->addAction(refreshAction);
    toolBar->addAction(homeAction);
    toolBar->addWidget(urlLineEdit);
    toolBar->addAction(loadAction);
}

void MainWindow::createCentralZone()
{
    QWidget *centralZone = new QWidget;
    setCentralWidget(centralZone);
}
