#include "viewrecords.h"
#include "ui_viewrecords.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <QTableWidgetItem>


ViewRecords::ViewRecords(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::ViewRecords)
{
    ui->setupUi(this);

    std::ifstream in("farmers.txt");
    std::string line;
    int row = 0;

    while (getline(in, line)) {
        std::stringstream ss(line);
        std::string part;
        std::vector<std::string> data;

        while (getline(ss, part, '|'))
            data.push_back(part);

        ui->tableWidget->insertRow(row);

        for (int col = 0; col < data.size(); col++) {
            ui->tableWidget->setItem(
                row, col,
                new QTableWidgetItem(
                    QString::fromStdString(data[col])
                    )
                );
        }

        row++;
    }
}


ViewRecords ::~ViewRecords()
{
    delete ui;
}
