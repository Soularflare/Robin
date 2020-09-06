/********************************************************************************
** Form generated from reading UI file 'autodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTODIALOG_H
#define UI_AUTODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AutoDialog
{
public:
    QLabel *label;

    void setupUi(QDialog *AutoDialog)
    {
        if (AutoDialog->objectName().isEmpty())
            AutoDialog->setObjectName(QStringLiteral("AutoDialog"));
        AutoDialog->resize(400, 300);
        label = new QLabel(AutoDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 140, 291, 20));

        retranslateUi(AutoDialog);

        QMetaObject::connectSlotsByName(AutoDialog);
    } // setupUi

    void retranslateUi(QDialog *AutoDialog)
    {
        AutoDialog->setWindowTitle(QApplication::translate("AutoDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("AutoDialog", "Feeder set to automatic mode.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AutoDialog: public Ui_AutoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTODIALOG_H
