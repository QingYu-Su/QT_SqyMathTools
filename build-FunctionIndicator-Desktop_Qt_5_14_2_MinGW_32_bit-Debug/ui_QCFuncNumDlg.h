/********************************************************************************
** Form generated from reading UI file 'QCFuncNumDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCFUNCNUMDLG_H
#define UI_QCFUNCNUMDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_QCFuncNumDlg
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *m_Tip;
    QLineEdit *m_Edit_Num;

    void setupUi(QDialog *QCFuncNumDlg)
    {
        if (QCFuncNumDlg->objectName().isEmpty())
            QCFuncNumDlg->setObjectName(QString::fromUtf8("QCFuncNumDlg"));
        QCFuncNumDlg->resize(472, 226);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(15);
        QCFuncNumDlg->setFont(font);
        buttonBox = new QDialogButtonBox(QCFuncNumDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(70, 150, 175, 41));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        m_Tip = new QLabel(QCFuncNumDlg);
        m_Tip->setObjectName(QString::fromUtf8("m_Tip"));
        m_Tip->setGeometry(QRect(9, 9, 114, 32));
        m_Edit_Num = new QLineEdit(QCFuncNumDlg);
        m_Edit_Num->setObjectName(QString::fromUtf8("m_Edit_Num"));
        m_Edit_Num->setGeometry(QRect(60, 80, 227, 40));

        retranslateUi(QCFuncNumDlg);

        QMetaObject::connectSlotsByName(QCFuncNumDlg);
    } // setupUi

    void retranslateUi(QDialog *QCFuncNumDlg)
    {
        QCFuncNumDlg->setWindowTitle(QCoreApplication::translate("QCFuncNumDlg", "Dialog", nullptr));
        m_Tip->setText(QCoreApplication::translate("QCFuncNumDlg", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QCFuncNumDlg: public Ui_QCFuncNumDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCFUNCNUMDLG_H
