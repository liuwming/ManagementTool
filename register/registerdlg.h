#ifndef REGISTERDLG_H
#define REGISTERDLG_H

#include <QDialog>

namespace Ui {
class registerDlg;
}

class registerDlg : public QDialog
{
    Q_OBJECT

public:
    explicit registerDlg(QWidget *parent = 0);
    ~registerDlg();

private:
    Ui::registerDlg *ui;
};

#endif // REGISTERDLG_H
