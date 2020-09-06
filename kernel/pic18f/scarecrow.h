#ifndef SCARECROW_H
#define SCARECROW_H

#include <QDialog>

namespace Ui {
class Scarecrow;
}

class Scarecrow : public QDialog
{
    Q_OBJECT

public:
    explicit Scarecrow(QWidget *parent = 0);
    ~Scarecrow();

private:
    Ui::Scarecrow *ui;
};

#endif // SCARECROW_H
