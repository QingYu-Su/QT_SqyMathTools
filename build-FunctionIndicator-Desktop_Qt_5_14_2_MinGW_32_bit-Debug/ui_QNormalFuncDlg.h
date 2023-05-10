/********************************************************************************
** Form generated from reading UI file 'QNormalFuncDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QNORMALFUNCDLG_H
#define UI_QNORMALFUNCDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_QNormalFuncDlg
{
public:

    void setupUi(QDialog *QNormalFuncDlg)
    {
        if (QNormalFuncDlg->objectName().isEmpty())
            QNormalFuncDlg->setObjectName(QString::fromUtf8("QNormalFuncDlg"));
        QNormalFuncDlg->resize(400, 300);

        retranslateUi(QNormalFuncDlg);

        QMetaObject::connectSlotsByName(QNormalFuncDlg);
    } // setupUi

    void retranslateUi(QDialog *QNormalFuncDlg)
    {
        QNormalFuncDlg->setWindowTitle(QCoreApplication::translate("QNormalFuncDlg", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QNormalFuncDlg: public Ui_QNormalFuncDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QNORMALFUNCDLG_H
