#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::on_browseButton_clicked() {

}


void MainWindow::on_updateButton_clicked() {

}


void MainWindow::on_modsTree_itemSelectionChanged() {

}