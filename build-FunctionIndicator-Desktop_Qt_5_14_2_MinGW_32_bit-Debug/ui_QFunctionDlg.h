/********************************************************************************
** Form generated from reading UI file 'QFunctionDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFUNCTIONDLG_H
#define UI_QFUNCTIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QFunctionDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QLineEdit *m_EditFunction;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_Left;
    QPushButton *m_Right;
    QPushButton *m_Pi;
    QPushButton *m_E;
    QPushButton *m_Reciproal;
    QPushButton *m_AllClear;
    QPushButton *m_Delete;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *m_Num_7;
    QPushButton *m_Num_8;
    QPushButton *m_Num9;
    QPushButton *m_Plus;
    QPushButton *m_Negative;
    QPushButton *m_Factorial;
    QPushButton *m_Pow;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *m_Num_4;
    QPushButton *m_Num_5;
    QPushButton *m_Num_6;
    QPushButton *m_Minus;
    QPushButton *m_Tan;
    QPushButton *m_Sqrt;
    QPushButton *m_Mod;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *m_Num_1;
    QPushButton *m_Num_2;
    QPushButton *m_Num_3;
    QPushButton *m_Multiply;
    QPushButton *m_Cos;
    QPushButton *m_Ln;
    QPushButton *m_Abs;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *m_DV;
    QPushButton *m_Num_0;
    QPushButton *m_Dot;
    QPushButton *m_Divide;
    QPushButton *m_Sin;
    QPushButton *m_Log;
    QLabel *label;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *QFunctionDlg)
    {
        if (QFunctionDlg->objectName().isEmpty())
            QFunctionDlg->setObjectName(QString::fromUtf8("QFunctionDlg"));
        QFunctionDlg->resize(953, 532);
        QFont font;
        font.setPointSize(15);
        QFunctionDlg->setFont(font);
        verticalLayout_2 = new QVBoxLayout(QFunctionDlg);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_EditFunction = new QLineEdit(QFunctionDlg);
        m_EditFunction->setObjectName(QString::fromUtf8("m_EditFunction"));
        m_EditFunction->setMinimumSize(QSize(0, 50));
        m_EditFunction->setFont(font);
        m_EditFunction->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_EditFunction->setReadOnly(true);

        verticalLayout_2->addWidget(m_EditFunction);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_Left = new QPushButton(QFunctionDlg);
        m_Left->setObjectName(QString::fromUtf8("m_Left"));
        m_Left->setMinimumSize(QSize(120, 60));

        horizontalLayout->addWidget(m_Left);

        m_Right = new QPushButton(QFunctionDlg);
        m_Right->setObjectName(QString::fromUtf8("m_Right"));
        m_Right->setMinimumSize(QSize(120, 60));

        horizontalLayout->addWidget(m_Right);

        m_Pi = new QPushButton(QFunctionDlg);
        m_Pi->setObjectName(QString::fromUtf8("m_Pi"));
        m_Pi->setMinimumSize(QSize(120, 60));

        horizontalLayout->addWidget(m_Pi);

        m_E = new QPushButton(QFunctionDlg);
        m_E->setObjectName(QString::fromUtf8("m_E"));
        m_E->setMinimumSize(QSize(120, 60));

        horizontalLayout->addWidget(m_E);

        m_Reciproal = new QPushButton(QFunctionDlg);
        m_Reciproal->setObjectName(QString::fromUtf8("m_Reciproal"));
        m_Reciproal->setMinimumSize(QSize(120, 60));

        horizontalLayout->addWidget(m_Reciproal);

        m_AllClear = new QPushButton(QFunctionDlg);
        m_AllClear->setObjectName(QString::fromUtf8("m_AllClear"));
        m_AllClear->setMinimumSize(QSize(120, 60));

        horizontalLayout->addWidget(m_AllClear);

        m_Delete = new QPushButton(QFunctionDlg);
        m_Delete->setObjectName(QString::fromUtf8("m_Delete"));
        m_Delete->setMinimumSize(QSize(120, 60));

        horizontalLayout->addWidget(m_Delete);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        m_Num_7 = new QPushButton(QFunctionDlg);
        m_Num_7->setObjectName(QString::fromUtf8("m_Num_7"));
        m_Num_7->setMinimumSize(QSize(120, 60));

        horizontalLayout_2->addWidget(m_Num_7);

        m_Num_8 = new QPushButton(QFunctionDlg);
        m_Num_8->setObjectName(QString::fromUtf8("m_Num_8"));
        m_Num_8->setMinimumSize(QSize(120, 60));

        horizontalLayout_2->addWidget(m_Num_8);

        m_Num9 = new QPushButton(QFunctionDlg);
        m_Num9->setObjectName(QString::fromUtf8("m_Num9"));
        m_Num9->setMinimumSize(QSize(120, 60));

        horizontalLayout_2->addWidget(m_Num9);

        m_Plus = new QPushButton(QFunctionDlg);
        m_Plus->setObjectName(QString::fromUtf8("m_Plus"));
        m_Plus->setMinimumSize(QSize(120, 60));

        horizontalLayout_2->addWidget(m_Plus);

        m_Negative = new QPushButton(QFunctionDlg);
        m_Negative->setObjectName(QString::fromUtf8("m_Negative"));
        m_Negative->setMinimumSize(QSize(120, 60));

        horizontalLayout_2->addWidget(m_Negative);

        m_Factorial = new QPushButton(QFunctionDlg);
        m_Factorial->setObjectName(QString::fromUtf8("m_Factorial"));
        m_Factorial->setMinimumSize(QSize(120, 60));

        horizontalLayout_2->addWidget(m_Factorial);

        m_Pow = new QPushButton(QFunctionDlg);
        m_Pow->setObjectName(QString::fromUtf8("m_Pow"));
        m_Pow->setMinimumSize(QSize(120, 60));

        horizontalLayout_2->addWidget(m_Pow);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        m_Num_4 = new QPushButton(QFunctionDlg);
        m_Num_4->setObjectName(QString::fromUtf8("m_Num_4"));
        m_Num_4->setMinimumSize(QSize(120, 60));

        horizontalLayout_3->addWidget(m_Num_4);

        m_Num_5 = new QPushButton(QFunctionDlg);
        m_Num_5->setObjectName(QString::fromUtf8("m_Num_5"));
        m_Num_5->setMinimumSize(QSize(120, 60));

        horizontalLayout_3->addWidget(m_Num_5);

        m_Num_6 = new QPushButton(QFunctionDlg);
        m_Num_6->setObjectName(QString::fromUtf8("m_Num_6"));
        m_Num_6->setMinimumSize(QSize(120, 60));

        horizontalLayout_3->addWidget(m_Num_6);

        m_Minus = new QPushButton(QFunctionDlg);
        m_Minus->setObjectName(QString::fromUtf8("m_Minus"));
        m_Minus->setMinimumSize(QSize(120, 60));

        horizontalLayout_3->addWidget(m_Minus);

        m_Tan = new QPushButton(QFunctionDlg);
        m_Tan->setObjectName(QString::fromUtf8("m_Tan"));
        m_Tan->setMinimumSize(QSize(120, 60));

        horizontalLayout_3->addWidget(m_Tan);

        m_Sqrt = new QPushButton(QFunctionDlg);
        m_Sqrt->setObjectName(QString::fromUtf8("m_Sqrt"));
        m_Sqrt->setMinimumSize(QSize(120, 60));

        horizontalLayout_3->addWidget(m_Sqrt);

        m_Mod = new QPushButton(QFunctionDlg);
        m_Mod->setObjectName(QString::fromUtf8("m_Mod"));
        m_Mod->setMinimumSize(QSize(120, 60));

        horizontalLayout_3->addWidget(m_Mod);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        m_Num_1 = new QPushButton(QFunctionDlg);
        m_Num_1->setObjectName(QString::fromUtf8("m_Num_1"));
        m_Num_1->setMinimumSize(QSize(120, 60));

        horizontalLayout_4->addWidget(m_Num_1);

        m_Num_2 = new QPushButton(QFunctionDlg);
        m_Num_2->setObjectName(QString::fromUtf8("m_Num_2"));
        m_Num_2->setMinimumSize(QSize(120, 60));

        horizontalLayout_4->addWidget(m_Num_2);

        m_Num_3 = new QPushButton(QFunctionDlg);
        m_Num_3->setObjectName(QString::fromUtf8("m_Num_3"));
        m_Num_3->setMinimumSize(QSize(120, 60));

        horizontalLayout_4->addWidget(m_Num_3);

        m_Multiply = new QPushButton(QFunctionDlg);
        m_Multiply->setObjectName(QString::fromUtf8("m_Multiply"));
        m_Multiply->setMinimumSize(QSize(120, 60));

        horizontalLayout_4->addWidget(m_Multiply);

        m_Cos = new QPushButton(QFunctionDlg);
        m_Cos->setObjectName(QString::fromUtf8("m_Cos"));
        m_Cos->setMinimumSize(QSize(120, 60));

        horizontalLayout_4->addWidget(m_Cos);

        m_Ln = new QPushButton(QFunctionDlg);
        m_Ln->setObjectName(QString::fromUtf8("m_Ln"));
        m_Ln->setMinimumSize(QSize(120, 60));

        horizontalLayout_4->addWidget(m_Ln);

        m_Abs = new QPushButton(QFunctionDlg);
        m_Abs->setObjectName(QString::fromUtf8("m_Abs"));
        m_Abs->setMinimumSize(QSize(120, 60));

        horizontalLayout_4->addWidget(m_Abs);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        m_DV = new QPushButton(QFunctionDlg);
        m_DV->setObjectName(QString::fromUtf8("m_DV"));
        m_DV->setMinimumSize(QSize(120, 60));

        horizontalLayout_5->addWidget(m_DV);

        m_Num_0 = new QPushButton(QFunctionDlg);
        m_Num_0->setObjectName(QString::fromUtf8("m_Num_0"));
        m_Num_0->setMinimumSize(QSize(120, 60));

        horizontalLayout_5->addWidget(m_Num_0);

        m_Dot = new QPushButton(QFunctionDlg);
        m_Dot->setObjectName(QString::fromUtf8("m_Dot"));
        m_Dot->setMinimumSize(QSize(120, 60));

        horizontalLayout_5->addWidget(m_Dot);

        m_Divide = new QPushButton(QFunctionDlg);
        m_Divide->setObjectName(QString::fromUtf8("m_Divide"));
        m_Divide->setMinimumSize(QSize(120, 60));

        horizontalLayout_5->addWidget(m_Divide);

        m_Sin = new QPushButton(QFunctionDlg);
        m_Sin->setObjectName(QString::fromUtf8("m_Sin"));
        m_Sin->setMinimumSize(QSize(120, 60));

        horizontalLayout_5->addWidget(m_Sin);

        m_Log = new QPushButton(QFunctionDlg);
        m_Log->setObjectName(QString::fromUtf8("m_Log"));
        m_Log->setMinimumSize(QSize(120, 60));

        horizontalLayout_5->addWidget(m_Log);

        label = new QLabel(QFunctionDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 60));

        horizontalLayout_5->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(QFunctionDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setMinimumSize(QSize(0, 60));
        buttonBox->setSizeIncrement(QSize(0, 0));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        horizontalLayout_6->addWidget(buttonBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_6);


        retranslateUi(QFunctionDlg);

        QMetaObject::connectSlotsByName(QFunctionDlg);
    } // setupUi

    void retranslateUi(QDialog *QFunctionDlg)
    {
        QFunctionDlg->setWindowTitle(QCoreApplication::translate("QFunctionDlg", "\345\207\275\346\225\260\350\241\250\350\276\276\345\274\217\347\274\226\350\276\221\345\231\250", nullptr));
        m_Left->setText(QCoreApplication::translate("QFunctionDlg", "(", nullptr));
        m_Right->setText(QCoreApplication::translate("QFunctionDlg", ")", nullptr));
        m_Pi->setText(QCoreApplication::translate("QFunctionDlg", "pi", nullptr));
        m_E->setText(QCoreApplication::translate("QFunctionDlg", "e", nullptr));
        m_Reciproal->setText(QCoreApplication::translate("QFunctionDlg", "1/x", nullptr));
        m_AllClear->setText(QCoreApplication::translate("QFunctionDlg", "AC", nullptr));
        m_Delete->setText(QCoreApplication::translate("QFunctionDlg", "<-", nullptr));
        m_Num_7->setText(QCoreApplication::translate("QFunctionDlg", "7", nullptr));
        m_Num_8->setText(QCoreApplication::translate("QFunctionDlg", "8", nullptr));
        m_Num9->setText(QCoreApplication::translate("QFunctionDlg", "9", nullptr));
        m_Plus->setText(QCoreApplication::translate("QFunctionDlg", "+", nullptr));
        m_Negative->setText(QCoreApplication::translate("QFunctionDlg", "+/-", nullptr));
        m_Factorial->setText(QCoreApplication::translate("QFunctionDlg", "n!", nullptr));
        m_Pow->setText(QCoreApplication::translate("QFunctionDlg", "^", nullptr));
        m_Num_4->setText(QCoreApplication::translate("QFunctionDlg", "4", nullptr));
        m_Num_5->setText(QCoreApplication::translate("QFunctionDlg", "5", nullptr));
        m_Num_6->setText(QCoreApplication::translate("QFunctionDlg", "6", nullptr));
        m_Minus->setText(QCoreApplication::translate("QFunctionDlg", "-", nullptr));
        m_Tan->setText(QCoreApplication::translate("QFunctionDlg", "tan", nullptr));
        m_Sqrt->setText(QCoreApplication::translate("QFunctionDlg", "sqrt", nullptr));
        m_Mod->setText(QCoreApplication::translate("QFunctionDlg", "mod", nullptr));
        m_Num_1->setText(QCoreApplication::translate("QFunctionDlg", "1", nullptr));
        m_Num_2->setText(QCoreApplication::translate("QFunctionDlg", "2", nullptr));
        m_Num_3->setText(QCoreApplication::translate("QFunctionDlg", "3", nullptr));
        m_Multiply->setText(QCoreApplication::translate("QFunctionDlg", "*", nullptr));
        m_Cos->setText(QCoreApplication::translate("QFunctionDlg", "cos", nullptr));
        m_Ln->setText(QCoreApplication::translate("QFunctionDlg", "ln", nullptr));
        m_Abs->setText(QCoreApplication::translate("QFunctionDlg", "|x|", nullptr));
        m_DV->setText(QCoreApplication::translate("QFunctionDlg", "\350\207\252\345\217\230\351\207\217", nullptr));
        m_Num_0->setText(QCoreApplication::translate("QFunctionDlg", "0", nullptr));
        m_Dot->setText(QCoreApplication::translate("QFunctionDlg", ".", nullptr));
        m_Divide->setText(QCoreApplication::translate("QFunctionDlg", "/", nullptr));
        m_Sin->setText(QCoreApplication::translate("QFunctionDlg", "sin", nullptr));
        m_Log->setText(QCoreApplication::translate("QFunctionDlg", "log", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QFunctionDlg: public Ui_QFunctionDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFUNCTIONDLG_H
