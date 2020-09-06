#ifndef AUTODIALOG_H
#define AUTODIALOG_H

#include <QDialog>

namespace Ui {
class AutoDialog;
}

class AutoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AutoDialog(QWidget *parent = 0);
    ~AutoDialog();

private:
    Ui::AutoDialog *ui;
};

#endif // AUTODIALOG_H
