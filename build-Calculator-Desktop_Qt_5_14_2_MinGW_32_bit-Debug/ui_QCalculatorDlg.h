/********************************************************************************
** Form generated from reading UI file 'QCalculatorDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCALCULATORDLG_H
#define UI_QCALCULATORDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QCalculatorDlg
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *m_Histroy;
    QLineEdit *m_Current;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *m_Abs;
    QPushButton *m_Reciproal;
    QPushButton *m_Factorial;
    QPushButton *m_AllClear;
    QPushButton *m_Delete;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *m_Mod;
    QPushButton *m_Log;
    QPushButton *m_Ln;
    QPushButton *m_E;
    QPushButton *m_Pow;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *m_Sqrt;
    QPushButton *m_Left;
    QPushButton *m_Right;
    QPushButton *m_Pi;
    QPushButton *m_Plus;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *m_Sin;
    QPushButton *m_Num_7;
    QPushButton *m_Num_8;
    QPushButton *m_Num9;
    QPushButton *m_Minus;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *m_Cos;
    QPushButton *m_Num_4;
    QPushButton *m_Num_5;
    QPushButton *m_Num_6;
    QPushButton *m_Multiply;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *m_Tan;
    QPushButton *m_Num_1;
    QPushButton *m_Num_2;
    QPushButton *m_Num_3;
    QPushButton *m_Divide;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_Negative;
    QPushButton *m_Dot;
    QPushButton *m_Num_0;
    QPushButton *m_Equal;

    void setupUi(QDialog *QCalculatorDlg)
    {
        if (QCalculatorDlg->objectName().isEmpty())
            QCalculatorDlg->setObjectName(QString::fromUtf8("QCalculatorDlg"));
        QCalculatorDlg->resize(790, 604);
        QFont font;
        font.setPointSize(15);
        QCalculatorDlg->setFont(font);
        verticalLayout = new QVBoxLayout(QCalculatorDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_Histroy = new QLineEdit(QCalculatorDlg);
        m_Histroy->setObjectName(QString::fromUtf8("m_Histroy"));
        m_Histroy->setMinimumSize(QSize(0, 50));
        m_Histroy->setFont(font);
        m_Histroy->setLayoutDirection(Qt::LeftToRight);
        m_Histroy->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_Histroy->setReadOnly(true);

        verticalLayout->addWidget(m_Histroy);

        m_Current = new QLineEdit(QCalculatorDlg);
        m_Current->setObjectName(QString::fromUtf8("m_Current"));
        m_Current->setMinimumSize(QSize(0, 50));
        m_Current->setFont(font);
        m_Current->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_Current->setReadOnly(true);

        verticalLayout->addWidget(m_Current);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        m_Abs = new QPushButton(QCalculatorDlg);
        m_Abs->setObjectName(QString::fromUtf8("m_Abs"));
        m_Abs->setMinimumSize(QSize(120, 60));

        horizontalLayout_7->addWidget(m_Abs);

        m_Reciproal = new QPushButton(QCalculatorDlg);
        m_Reciproal->setObjectName(QString::fromUtf8("m_Reciproal"));
        m_Reciproal->setMinimumSize(QSize(120, 60));

        horizontalLayout_7->addWidget(m_Reciproal);

        m_Factorial = new QPushButton(QCalculatorDlg);
        m_Factorial->setObjectName(QString::fromUtf8("m_Factorial"));
        m_Factorial->setMinimumSize(QSize(120, 60));

        horizontalLayout_7->addWidget(m_Factorial);

        m_AllClear = new QPushButton(QCalculatorDlg);
        m_AllClear->setObjectName(QString::fromUtf8("m_AllClear"));
        m_AllClear->setMinimumSize(QSize(120, 60));

        horizontalLayout_7->addWidget(m_AllClear);

        m_Delete = new QPushButton(QCalculatorDlg);
        m_Delete->setObjectName(QString::fromUtf8("m_Delete"));
        m_Delete->setMinimumSize(QSize(120, 60));

        horizontalLayout_7->addWidget(m_Delete);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        m_Mod = new QPushButton(QCalculatorDlg);
        m_Mod->setObjectName(QString::fromUtf8("m_Mod"));
        m_Mod->setMinimumSize(QSize(120, 60));

        horizontalLayout_6->addWidget(m_Mod);

        m_Log = new QPushButton(QCalculatorDlg);
        m_Log->setObjectName(QString::fromUtf8("m_Log"));
        m_Log->setMinimumSize(QSize(120, 60));

        horizontalLayout_6->addWidget(m_Log);

        m_Ln = new QPushButton(QCalculatorDlg);
        m_Ln->setObjectName(QString::fromUtf8("m_Ln"));
        m_Ln->setMinimumSize(QSize(120, 60));

        horizontalLayout_6->addWidget(m_Ln);

        m_E = new QPushButton(QCalculatorDlg);
        m_E->setObjectName(QString::fromUtf8("m_E"));
        m_E->setMinimumSize(QSize(120, 60));

        horizontalLayout_6->addWidget(m_E);

        m_Pow = new QPushButton(QCalculatorDlg);
        m_Pow->setObjectName(QString::fromUtf8("m_Pow"));
        m_Pow->setMinimumSize(QSize(120, 60));

        horizontalLayout_6->addWidget(m_Pow);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        m_Sqrt = new QPushButton(QCalculatorDlg);
        m_Sqrt->setObjectName(QString::fromUtf8("m_Sqrt"));
        m_Sqrt->setMinimumSize(QSize(120, 60));

        horizontalLayout_5->addWidget(m_Sqrt);

        m_Left = new QPushButton(QCalculatorDlg);
        m_Left->setObjectName(QString::fromUtf8("m_Left"));
        m_Left->setMinimumSize(QSize(120, 60));

        horizontalLayout_5->addWidget(m_Left);

        m_Right = new QPushButton(QCalculatorDlg);
        m_Right->setObjectName(QString::fromUtf8("m_Right"));
        m_Right->setMinimumSize(QSize(120, 60));

        horizontalLayout_5->addWidget(m_Right);

        m_Pi = new QPushButton(QCalculatorDlg);
        m_Pi->setObjectName(QString::fromUtf8("m_Pi"));
        m_Pi->setMinimumSize(QSize(120, 60));

        horizontalLayout_5->addWidget(m_Pi);

        m_Plus = new QPushButton(QCalculatorDlg);
        m_Plus->setObjectName(QString::fromUtf8("m_Plus"));
        m_Plus->setMinimumSize(QSize(120, 60));

        horizontalLayout_5->addWidget(m_Plus);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        m_Sin = new QPushButton(QCalculatorDlg);
        m_Sin->setObjectName(QString::fromUtf8("m_Sin"));
        m_Sin->setMinimumSize(QSize(120, 60));

        horizontalLayout_4->addWidget(m_Sin);

        m_Num_7 = new QPushButton(QCalculatorDlg);
        m_Num_7->setObjectName(QString::fromUtf8("m_Num_7"));
        m_Num_7->setMinimumSize(QSize(120, 60));

        horizontalLayout_4->addWidget(m_Num_7);

        m_Num_8 = new QPushButton(QCalculatorDlg);
        m_Num_8->setObjectName(QString::fromUtf8("m_Num_8"));
        m_Num_8->setMinimumSize(QSize(120, 60));

        horizontalLayout_4->addWidget(m_Num_8);

        m_Num9 = new QPushButton(QCalculatorDlg);
        m_Num9->setObjectName(QString::fromUtf8("m_Num9"));
        m_Num9->setMinimumSize(QSize(120, 60));

        horizontalLayout_4->addWidget(m_Num9);

        m_Minus = new QPushButton(QCalculatorDlg);
        m_Minus->setObjectName(QString::fromUtf8("m_Minus"));
        m_Minus->setMinimumSize(QSize(120, 60));

        horizontalLayout_4->addWidget(m_Minus);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        m_Cos = new QPushButton(QCalculatorDlg);
        m_Cos->setObjectName(QString::fromUtf8("m_Cos"));
        m_Cos->setMinimumSize(QSize(120, 60));

        horizontalLayout_3->addWidget(m_Cos);

        m_Num_4 = new QPushButton(QCalculatorDlg);
        m_Num_4->setObjectName(QString::fromUtf8("m_Num_4"));
        m_Num_4->setMinimumSize(QSize(120, 60));

        horizontalLayout_3->addWidget(m_Num_4);

        m_Num_5 = new QPushButton(QCalculatorDlg);
        m_Num_5->setObjectName(QString::fromUtf8("m_Num_5"));
        m_Num_5->setMinimumSize(QSize(120, 60));

        horizontalLayout_3->addWidget(m_Num_5);

        m_Num_6 = new QPushButton(QCalculatorDlg);
        m_Num_6->setObjectName(QString::fromUtf8("m_Num_6"));
        m_Num_6->setMinimumSize(QSize(120, 60));

        horizontalLayout_3->addWidget(m_Num_6);

        m_Multiply = new QPushButton(QCalculatorDlg);
        m_Multiply->setObjectName(QString::fromUtf8("m_Multiply"));
        m_Multiply->setMinimumSize(QSize(120, 60));

        horizontalLayout_3->addWidget(m_Multiply);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        m_Tan = new QPushButton(QCalculatorDlg);
        m_Tan->setObjectName(QString::fromUtf8("m_Tan"));
        m_Tan->setMinimumSize(QSize(120, 60));

        horizontalLayout_2->addWidget(m_Tan);

        m_Num_1 = new QPushButton(QCalculatorDlg);
        m_Num_1->setObjectName(QString::fromUtf8("m_Num_1"));
        m_Num_1->setMinimumSize(QSize(120, 60));

        horizontalLayout_2->addWidget(m_Num_1);

        m_Num_2 = new QPushButton(QCalculatorDlg);
        m_Num_2->setObjectName(QString::fromUtf8("m_Num_2"));
        m_Num_2->setMinimumSize(QSize(120, 60));

        horizontalLayout_2->addWidget(m_Num_2);

        m_Num_3 = new QPushButton(QCalculatorDlg);
        m_Num_3->setObjectName(QString::fromUtf8("m_Num_3"));
        m_Num_3->setMinimumSize(QSize(120, 60));

        horizontalLayout_2->addWidget(m_Num_3);

        m_Divide = new QPushButton(QCalculatorDlg);
        m_Divide->setObjectName(QString::fromUtf8("m_Divide"));
        m_Divide->setMinimumSize(QSize(120, 60));

        horizontalLayout_2->addWidget(m_Divide);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_Negative = new QPushButton(QCalculatorDlg);
        m_Negative->setObjectName(QString::fromUtf8("m_Negative"));
        m_Negative->setMinimumSize(QSize(120, 60));

        horizontalLayout->addWidget(m_Negative);

        m_Dot = new QPushButton(QCalculatorDlg);
        m_Dot->setObjectName(QString::fromUtf8("m_Dot"));
        m_Dot->setMinimumSize(QSize(120, 60));

        horizontalLayout->addWidget(m_Dot);

        m_Num_0 = new QPushButton(QCalculatorDlg);
        m_Num_0->setObjectName(QString::fromUtf8("m_Num_0"));
        m_Num_0->setMinimumSize(QSize(120, 60));

        horizontalLayout->addWidget(m_Num_0);

        m_Equal = new QPushButton(QCalculatorDlg);
        m_Equal->setObjectName(QString::fromUtf8("m_Equal"));
        m_Equal->setMinimumSize(QSize(300, 60));

        horizontalLayout->addWidget(m_Equal);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QCalculatorDlg);

        QMetaObject::connectSlotsByName(QCalculatorDlg);
    } // setupUi

    void retranslateUi(QDialog *QCalculatorDlg)
    {
        QCalculatorDlg->setWindowTitle(QCoreApplication::translate("QCalculatorDlg", "\350\256\241\347\256\227\345\231\250", nullptr));
        m_Abs->setText(QCoreApplication::translate("QCalculatorDlg", "|x|", nullptr));
        m_Reciproal->setText(QCoreApplication::translate("QCalculatorDlg", "1/x", nullptr));
        m_Factorial->setText(QCoreApplication::translate("QCalculatorDlg", "n!", nullptr));
        m_AllClear->setText(QCoreApplication::translate("QCalculatorDlg", "AC", nullptr));
        m_Delete->setText(QCoreApplication::translate("QCalculatorDlg", "<-", nullptr));
        m_Mod->setText(QCoreApplication::translate("QCalculatorDlg", "mod", nullptr));
        m_Log->setText(QCoreApplication::translate("QCalculatorDlg", "log", nullptr));
        m_Ln->setText(QCoreApplication::translate("QCalculatorDlg", "ln", nullptr));
        m_E->setText(QCoreApplication::translate("QCalculatorDlg", "e", nullptr));
        m_Pow->setText(QCoreApplication::translate("QCalculatorDlg", "^", nullptr));
        m_Sqrt->setText(QCoreApplication::translate("QCalculatorDlg", "sqrt", nullptr));
        m_Left->setText(QCoreApplication::translate("QCalculatorDlg", "(", nullptr));
        m_Right->setText(QCoreApplication::translate("QCalculatorDlg", ")", nullptr));
        m_Pi->setText(QCoreApplication::translate("QCalculatorDlg", "pi", nullptr));
        m_Plus->setText(QCoreApplication::translate("QCalculatorDlg", "+", nullptr));
        m_Sin->setText(QCoreApplication::translate("QCalculatorDlg", "sin", nullptr));
        m_Num_7->setText(QCoreApplication::translate("QCalculatorDlg", "7", nullptr));
        m_Num_8->setText(QCoreApplication::translate("QCalculatorDlg", "8", nullptr));
        m_Num9->setText(QCoreApplication::translate("QCalculatorDlg", "9", nullptr));
        m_Minus->setText(QCoreApplication::translate("QCalculatorDlg", "-", nullptr));
        m_Cos->setText(QCoreApplication::translate("QCalculatorDlg", "cos", nullptr));
        m_Num_4->setText(QCoreApplication::translate("QCalculatorDlg", "4", nullptr));
        m_Num_5->setText(QCoreApplication::translate("QCalculatorDlg", "5", nullptr));
        m_Num_6->setText(QCoreApplication::translate("QCalculatorDlg", "6", nullptr));
        m_Multiply->setText(QCoreApplication::translate("QCalculatorDlg", "*", nullptr));
        m_Tan->setText(QCoreApplication::translate("QCalculatorDlg", "tan", nullptr));
        m_Num_1->setText(QCoreApplication::translate("QCalculatorDlg", "1", nullptr));
        m_Num_2->setText(QCoreApplication::translate("QCalculatorDlg", "2", nullptr));
        m_Num_3->setText(QCoreApplication::translate("QCalculatorDlg", "3", nullptr));
        m_Divide->setText(QCoreApplication::translate("QCalculatorDlg", "/", nullptr));
        m_Negative->setText(QCoreApplication::translate("QCalculatorDlg", "+/-", nullptr));
        m_Dot->setText(QCoreApplication::translate("QCalculatorDlg", ".", nullptr));
        m_Num_0->setText(QCoreApplication::translate("QCalculatorDlg", "0", nullptr));
        m_Equal->setText(QCoreApplication::translate("QCalculatorDlg", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QCalculatorDlg: public Ui_QCalculatorDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCALCULATORDLG_H
