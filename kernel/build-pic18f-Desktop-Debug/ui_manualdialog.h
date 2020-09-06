/********************************************************************************
** Form generated from reading UI file 'manualdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUALDIALOG_H
#define UI_MANUALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ManualDialog
{
public:
    QLabel *label;

    void setupUi(QDialog *ManualDialog)
    {
        if (ManualDialog->objectName().isEmpty())
            ManualDialog->setObjectName(QStringLiteral("ManualDialog"));
        ManualDialog->resize(400, 300);
        label = new QLabel(ManualDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 140, 211, 20));

        retranslateUi(ManualDialog);

        QMetaObject::connectSlotsByName(ManualDialog);
    } // setupUi

    void retranslateUi(QDialog *ManualDialog)
    {
        ManualDialog->setWindowTitle(QApplication::translate("ManualDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ManualDialog", "Feeder reset to Manual mode", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ManualDialog: public Ui_ManualDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUALDIALOG_H
