#include "scarecrow.h"
#include "ui_scarecrow.h"

Scarecrow::Scarecrow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Scarecrow)
{
    ui->setupUi(this);
}

Scarecrow::~Scarecrow()
{
    delete ui;
}
