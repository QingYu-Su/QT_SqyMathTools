/********************************************************************************
** Form generated from reading UI file 'QTwoFuncDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWOFUNCDLG_H
#define UI_QTWOFUNCDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTwoFuncDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *m_Edit_Function_X;
    QPushButton *m_Button_EditFunc_X;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *m_Edit_Function_Y;
    QPushButton *m_Button_EditFunc_Y;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *m_Edit_Min;
    QLabel *label_8;
    QLabel *label_4;
    QLineEdit *m_Edit_Max;
    QGroupBox *groupBox_3;
    QPushButton *m_Button_LineColor;
    QLabel *label_7;
    QComboBox *m_Combox_LineType;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *m_Edit_Precision;
    QLabel *label_9;
    QLabel *label_6;
    QLineEdit *m_Edit_LineWidth;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QTwoFuncDlg)
    {
        if (QTwoFuncDlg->objectName().isEmpty())
            QTwoFuncDlg->setObjectName(QString::fromUtf8("QTwoFuncDlg"));
        QTwoFuncDlg->resize(547, 561);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(15);
        QTwoFuncDlg->setFont(font);
        verticalLayout = new QVBoxLayout(QTwoFuncDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(QTwoFuncDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 50, 461, 43));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        m_Edit_Function_X = new QLineEdit(layoutWidget);
        m_Edit_Function_X->setObjectName(QString::fromUtf8("m_Edit_Function_X"));
        m_Edit_Function_X->setReadOnly(true);

        horizontalLayout_3->addWidget(m_Edit_Function_X);

        m_Button_EditFunc_X = new QPushButton(layoutWidget);
        m_Button_EditFunc_X->setObjectName(QString::fromUtf8("m_Button_EditFunc_X"));

        horizontalLayout_3->addWidget(m_Button_EditFunc_X);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 110, 461, 43));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        m_Edit_Function_Y = new QLineEdit(layoutWidget_2);
        m_Edit_Function_Y->setObjectName(QString::fromUtf8("m_Edit_Function_Y"));
        m_Edit_Function_Y->setReadOnly(true);

        horizontalLayout_5->addWidget(m_Edit_Function_Y);

        m_Button_EditFunc_Y = new QPushButton(layoutWidget_2);
        m_Button_EditFunc_Y->setObjectName(QString::fromUtf8("m_Button_EditFunc_Y"));

        horizontalLayout_5->addWidget(m_Button_EditFunc_Y);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(QTwoFuncDlg);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setAlignment(Qt::AlignCenter);
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 70, 461, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(75, 40));

        horizontalLayout->addWidget(label_3);

        m_Edit_Min = new QLineEdit(layoutWidget1);
        m_Edit_Min->setObjectName(QString::fromUtf8("m_Edit_Min"));
        m_Edit_Min->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(m_Edit_Min);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(80, 40));

        horizontalLayout->addWidget(label_4);

        m_Edit_Max = new QLineEdit(layoutWidget1);
        m_Edit_Max->setObjectName(QString::fromUtf8("m_Edit_Max"));
        m_Edit_Max->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(m_Edit_Max);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(QTwoFuncDlg);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setAlignment(Qt::AlignCenter);
        groupBox_3->setFlat(false);
        groupBox_3->setCheckable(false);
        m_Button_LineColor = new QPushButton(groupBox_3);
        m_Button_LineColor->setObjectName(QString::fromUtf8("m_Button_LineColor"));
        m_Button_LineColor->setGeometry(QRect(40, 110, 111, 41));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(240, 110, 61, 41));
        m_Combox_LineType = new QComboBox(groupBox_3);
        m_Combox_LineType->addItem(QString());
        m_Combox_LineType->addItem(QString());
        m_Combox_LineType->addItem(QString());
        m_Combox_LineType->addItem(QString());
        m_Combox_LineType->addItem(QString());
        m_Combox_LineType->setObjectName(QString::fromUtf8("m_Combox_LineType"));
        m_Combox_LineType->setGeometry(QRect(310, 110, 181, 41));
        layoutWidget2 = new QWidget(groupBox_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 50, 461, 42));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_4->addWidget(label_5);

        m_Edit_Precision = new QLineEdit(layoutWidget2);
        m_Edit_Precision->setObjectName(QString::fromUtf8("m_Edit_Precision"));
        m_Edit_Precision->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(m_Edit_Precision);

        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_4->addWidget(label_9);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_4->addWidget(label_6);

        m_Edit_LineWidth = new QLineEdit(layoutWidget2);
        m_Edit_LineWidth->setObjectName(QString::fromUtf8("m_Edit_LineWidth"));
        m_Edit_LineWidth->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(m_Edit_LineWidth);


        verticalLayout->addWidget(groupBox_3);

        buttonBox = new QDialogButtonBox(QTwoFuncDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(2);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setLayoutDirection(Qt::LeftToRight);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QTwoFuncDlg);

        QMetaObject::connectSlotsByName(QTwoFuncDlg);
    } // setupUi

    void retranslateUi(QDialog *QTwoFuncDlg)
    {
        QTwoFuncDlg->setWindowTitle(QCoreApplication::translate("QTwoFuncDlg", "\345\217\202\346\225\260\346\226\271\347\250\213\345\207\275\346\225\260", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QTwoFuncDlg", "\345\207\275\346\225\260\350\241\250\350\276\276\345\274\217", nullptr));
        label->setText(QCoreApplication::translate("QTwoFuncDlg", "x(t)=", nullptr));
        m_Button_EditFunc_X->setText(QCoreApplication::translate("QTwoFuncDlg", "\347\274\226\350\276\221", nullptr));
        label_2->setText(QCoreApplication::translate("QTwoFuncDlg", "y(t)=", nullptr));
        m_Button_EditFunc_Y->setText(QCoreApplication::translate("QTwoFuncDlg", "\347\274\226\350\276\221", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QTwoFuncDlg", "\345\207\275\346\225\260\345\256\232\344\271\211\345\237\237", nullptr));
        label_3->setText(QCoreApplication::translate("QTwoFuncDlg", "Min(t)", nullptr));
        label_8->setText(QString());
        label_4->setText(QCoreApplication::translate("QTwoFuncDlg", "Max(t)", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QTwoFuncDlg", "\345\205\266\344\273\226\350\256\276\347\275\256", nullptr));
        m_Button_LineColor->setText(QCoreApplication::translate("QTwoFuncDlg", "\351\242\234\350\211\262", nullptr));
        label_7->setText(QCoreApplication::translate("QTwoFuncDlg", "\347\272\277\345\236\213", nullptr));
        m_Combox_LineType->setItemText(0, QCoreApplication::translate("QTwoFuncDlg", "Solid", nullptr));
        m_Combox_LineType->setItemText(1, QCoreApplication::translate("QTwoFuncDlg", "Dash", nullptr));
        m_Combox_LineType->setItemText(2, QCoreApplication::translate("QTwoFuncDlg", "Dot", nullptr));
        m_Combox_LineType->setItemText(3, QCoreApplication::translate("QTwoFuncDlg", "DashDot", nullptr));
        m_Combox_LineType->setItemText(4, QCoreApplication::translate("QTwoFuncDlg", "DashDotDot", nullptr));

        label_5->setText(QCoreApplication::translate("QTwoFuncDlg", "\345\233\276\345\203\217\347\262\276\347\273\206\345\272\246", nullptr));
        label_9->setText(QString());
        label_6->setText(QCoreApplication::translate("QTwoFuncDlg", "\347\272\277\345\256\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QTwoFuncDlg: public Ui_QTwoFuncDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWOFUNCDLG_H
