/********************************************************************************
** Form generated from reading UI file 'QFuncNumDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFUNCNUMDLG_H
#define UI_QFUNCNUMDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QFuncNumDlg
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *m_Tip;
    QLineEdit *m_Edit_Num;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QFuncNumDlg)
    {
        if (QFuncNumDlg->objectName().isEmpty())
            QFuncNumDlg->setObjectName(QString::fromUtf8("QFuncNumDlg"));
        QFuncNumDlg->resize(472, 155);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(15);
        QFuncNumDlg->setFont(font);
        verticalLayout = new QVBoxLayout(QFuncNumDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_Tip = new QLabel(QFuncNumDlg);
        m_Tip->setObjectName(QString::fromUtf8("m_Tip"));

        verticalLayout->addWidget(m_Tip);

        m_Edit_Num = new QLineEdit(QFuncNumDlg);
        m_Edit_Num->setObjectName(QString::fromUtf8("m_Edit_Num"));

        verticalLayout->addWidget(m_Edit_Num);

        buttonBox = new QDialogButtonBox(QFuncNumDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QFuncNumDlg);

        QMetaObject::connectSlotsByName(QFuncNumDlg);
    } // setupUi

    void retranslateUi(QDialog *QFuncNumDlg)
    {
        QFuncNumDlg->setWindowTitle(QCoreApplication::translate("QFuncNumDlg", "Dialog", nullptr));
        m_Tip->setText(QCoreApplication::translate("QFuncNumDlg", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QFuncNumDlg: public Ui_QFuncNumDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFUNCNUMDLG_H
