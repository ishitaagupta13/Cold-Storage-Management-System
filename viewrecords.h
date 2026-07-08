#ifndef VIEWRECORDS_H
#define VIEWRECORDS_H

#include <QDialog>

namespace Ui {
class ViewRecords;
}

class ViewRecords : public QDialog
{
    Q_OBJECT

public:
    explicit ViewRecords(QWidget *parent = nullptr);
    ~ViewRecords();

private:
    Ui::ViewRecords *ui;
};

#endif // VIEWRECORDS_H
