#ifndef OUTPUTCALCS_H
#define OUTPUTCALCS_H

#include <QDialog>

namespace Ui {
class OutputCalcs;
}

class OutputCalcs : public QDialog
{
    Q_OBJECT

public:
    explicit OutputCalcs(QWidget *parent = 0);
    ~OutputCalcs();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::OutputCalcs *ui;
};

#endif // OUTPUTCALCS_H
