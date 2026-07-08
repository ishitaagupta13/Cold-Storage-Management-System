
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Farmer.h"
#include "viewrecords.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Farmer::cnt = Farmer::getLastIdFromFile();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_saveButton_clicked()
{
    Farmer f;

    f.setData(
        ui->farmerEdit->text().toStdString(),
        ui->fatherEdit->text().toStdString(),
        ui->addressEdit->text().toStdString(),
        ui->quantityEdit->text().toInt(),
        ui->contactEdit->text().toStdString(),
        ui->rentEdit->text().toFloat()
        );

    f.saveToFile();

    QMessageBox::information(this, "Success", "Record saved!");

    // Clear fields after saving
    ui->farmerEdit->clear();
    ui->fatherEdit->clear();
    ui->addressEdit->clear();
    ui->quantityEdit->clear();
    ui->contactEdit->clear();
    ui->rentEdit->clear();
}
void MainWindow::on_viewButton_clicked()
{
    ViewRecords *v = new ViewRecords(this);
    v->show();
}


