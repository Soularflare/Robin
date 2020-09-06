#include "autodialog.h"
#include "ui_autodialog.h"

AutoDialog::AutoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AutoDialog)
{
    ui->setupUi(this);
}

AutoDialog::~AutoDialog()
{
    delete ui;
}
