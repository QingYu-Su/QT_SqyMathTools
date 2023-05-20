/********************************************************************************
** Form generated from reading UI file 'QSetXYRangeDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSETXYRANGEDLG_H
#define UI_QSETXYRANGEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QSetXYRangeDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *m_Edit_Min_X;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *m_Edit_Max_X;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *m_Edit_Min_Y;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *m_Edit_Max_Y;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QSetXYRangeDlg)
    {
        if (QSetXYRangeDlg->objectName().isEmpty())
            QSetXYRangeDlg->setObjectName(QString::fromUtf8("QSetXYRangeDlg"));
        QSetXYRangeDlg->resize(487, 300);
        QFont font;
        font.setPointSize(15);
        QSetXYRangeDlg->setFont(font);
        verticalLayout = new QVBoxLayout(QSetXYRangeDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(QSetXYRangeDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 50, 411, 37));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        m_Edit_Min_X = new QLineEdit(widget);
        m_Edit_Min_X->setObjectName(QString::fromUtf8("m_Edit_Min_X"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_Edit_Min_X->sizePolicy().hasHeightForWidth());
        m_Edit_Min_X->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(m_Edit_Min_X);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_2);

        m_Edit_Max_X = new QLineEdit(widget);
        m_Edit_Max_X->setObjectName(QString::fromUtf8("m_Edit_Max_X"));
        sizePolicy1.setHeightForWidth(m_Edit_Max_X->sizePolicy().hasHeightForWidth());
        m_Edit_Max_X->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(m_Edit_Max_X);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(QSetXYRangeDlg);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 50, 411, 37));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_7);

        m_Edit_Min_Y = new QLineEdit(layoutWidget_2);
        m_Edit_Min_Y->setObjectName(QString::fromUtf8("m_Edit_Min_Y"));
        sizePolicy1.setHeightForWidth(m_Edit_Min_Y->sizePolicy().hasHeightForWidth());
        m_Edit_Min_Y->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(m_Edit_Min_Y);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_8);

        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_9);

        m_Edit_Max_Y = new QLineEdit(layoutWidget_2);
        m_Edit_Max_Y->setObjectName(QString::fromUtf8("m_Edit_Max_Y"));
        sizePolicy1.setHeightForWidth(m_Edit_Max_Y->sizePolicy().hasHeightForWidth());
        m_Edit_Max_Y->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(m_Edit_Max_Y);


        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(QSetXYRangeDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QSetXYRangeDlg);

        QMetaObject::connectSlotsByName(QSetXYRangeDlg);
    } // setupUi

    void retranslateUi(QDialog *QSetXYRangeDlg)
    {
        QSetXYRangeDlg->setWindowTitle(QCoreApplication::translate("QSetXYRangeDlg", "\350\260\203\346\225\264X-Y\350\275\264\350\214\203\345\233\264", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QSetXYRangeDlg", "X\350\275\264\350\214\203\345\233\264", nullptr));
        label->setText(QCoreApplication::translate("QSetXYRangeDlg", "Min\357\274\232", nullptr));
        label_3->setText(QString());
        label_2->setText(QCoreApplication::translate("QSetXYRangeDlg", "Max\357\274\232", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QSetXYRangeDlg", "Y\350\275\264\350\214\203\345\233\264", nullptr));
        label_7->setText(QCoreApplication::translate("QSetXYRangeDlg", "Min\357\274\232", nullptr));
        label_8->setText(QString());
        label_9->setText(QCoreApplication::translate("QSetXYRangeDlg", "Max\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QSetXYRangeDlg: public Ui_QSetXYRangeDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSETXYRANGEDLG_H
