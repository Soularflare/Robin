/********************************************************************************
** Form generated from reading UI file 'scarecrow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCARECROW_H
#define UI_SCARECROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Scarecrow
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Scarecrow)
    {
        if (Scarecrow->objectName().isEmpty())
            Scarecrow->setObjectName(QStringLiteral("Scarecrow"));
        Scarecrow->resize(400, 300);
        label = new QLabel(Scarecrow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 130, 391, 20));
        label_2 = new QLabel(Scarecrow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 170, 81, 17));

        retranslateUi(Scarecrow);

        QMetaObject::connectSlotsByName(Scarecrow);
    } // setupUi

    void retranslateUi(QDialog *Scarecrow)
    {
        Scarecrow->setWindowTitle(QApplication::translate("Scarecrow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Scarecrow", "Scarecrow mode set. Scaring away unwanted pests.", Q_NULLPTR));
        label_2->setText(QApplication::translate("Scarecrow", "CAW CAW", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Scarecrow: public Ui_Scarecrow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCARECROW_H
