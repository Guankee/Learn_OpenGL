#include "MainWidget.h"


MainWindow::MainWindow(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::GL3D)
{
    ui->setupUi(this);
    setCentralWidget(ui->openGLWidget);
    //  widget =new GLWidget;
}

MainWindow::~MainWindow()
{
    delete ui;
}
