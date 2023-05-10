/********************************************************************************
** Form generated from reading UI file 'QFunctionIndicatorWnd.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFUNCTIONINDICATORWND_H
#define UI_QFUNCTIONINDICATORWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QFunctionIndicatorWnd
{
public:
    QAction *m_AddNormalFunc;
    QAction *action1;
    QAction *action2;
    QAction *action1_2;
    QAction *action2_2;
    QAction *action1_3;
    QAction *action1_4;
    QAction *action2_3;
    QAction *action3;
    QAction *action1_5;
    QAction *action2_4;
    QAction *action3_2;
    QAction *action4;
    QAction *action5;
    QAction *action1_6;
    QAction *action2_5;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *menu_6;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QFunctionIndicatorWnd)
    {
        if (QFunctionIndicatorWnd->objectName().isEmpty())
            QFunctionIndicatorWnd->setObjectName(QString::fromUtf8("QFunctionIndicatorWnd"));
        QFunctionIndicatorWnd->resize(1450, 700);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        QFunctionIndicatorWnd->setFont(font);
        m_AddNormalFunc = new QAction(QFunctionIndicatorWnd);
        m_AddNormalFunc->setObjectName(QString::fromUtf8("m_AddNormalFunc"));
        action1 = new QAction(QFunctionIndicatorWnd);
        action1->setObjectName(QString::fromUtf8("action1"));
        action2 = new QAction(QFunctionIndicatorWnd);
        action2->setObjectName(QString::fromUtf8("action2"));
        action1_2 = new QAction(QFunctionIndicatorWnd);
        action1_2->setObjectName(QString::fromUtf8("action1_2"));
        action2_2 = new QAction(QFunctionIndicatorWnd);
        action2_2->setObjectName(QString::fromUtf8("action2_2"));
        action1_3 = new QAction(QFunctionIndicatorWnd);
        action1_3->setObjectName(QString::fromUtf8("action1_3"));
        action1_4 = new QAction(QFunctionIndicatorWnd);
        action1_4->setObjectName(QString::fromUtf8("action1_4"));
        action2_3 = new QAction(QFunctionIndicatorWnd);
        action2_3->setObjectName(QString::fromUtf8("action2_3"));
        action3 = new QAction(QFunctionIndicatorWnd);
        action3->setObjectName(QString::fromUtf8("action3"));
        action1_5 = new QAction(QFunctionIndicatorWnd);
        action1_5->setObjectName(QString::fromUtf8("action1_5"));
        action2_4 = new QAction(QFunctionIndicatorWnd);
        action2_4->setObjectName(QString::fromUtf8("action2_4"));
        action3_2 = new QAction(QFunctionIndicatorWnd);
        action3_2->setObjectName(QString::fromUtf8("action3_2"));
        action4 = new QAction(QFunctionIndicatorWnd);
        action4->setObjectName(QString::fromUtf8("action4"));
        action5 = new QAction(QFunctionIndicatorWnd);
        action5->setObjectName(QString::fromUtf8("action5"));
        action1_6 = new QAction(QFunctionIndicatorWnd);
        action1_6->setObjectName(QString::fromUtf8("action1_6"));
        action2_5 = new QAction(QFunctionIndicatorWnd);
        action2_5->setObjectName(QString::fromUtf8("action2_5"));
        centralwidget = new QWidget(QFunctionIndicatorWnd);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QFunctionIndicatorWnd->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QFunctionIndicatorWnd);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1450, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        menu_6 = new QMenu(menubar);
        menu_6->setObjectName(QString::fromUtf8("menu_6"));
        QFunctionIndicatorWnd->setMenuBar(menubar);
        statusbar = new QStatusBar(QFunctionIndicatorWnd);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QFunctionIndicatorWnd->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menubar->addAction(menu_5->menuAction());
        menubar->addAction(menu_6->menuAction());
        menu->addAction(m_AddNormalFunc);
        menu->addAction(action1);
        menu->addAction(action2);
        menu_2->addAction(action1_3);
        menu_3->addAction(action1_2);
        menu_3->addAction(action2_2);
        menu_4->addAction(action1_4);
        menu_4->addAction(action2_3);
        menu_4->addAction(action3);
        menu_5->addAction(action1_5);
        menu_5->addAction(action2_4);
        menu_5->addAction(action3_2);
        menu_5->addAction(action4);
        menu_5->addAction(action5);
        menu_6->addAction(action1_6);
        menu_6->addAction(action2_5);

        retranslateUi(QFunctionIndicatorWnd);

        QMetaObject::connectSlotsByName(QFunctionIndicatorWnd);
    } // setupUi

    void retranslateUi(QMainWindow *QFunctionIndicatorWnd)
    {
        QFunctionIndicatorWnd->setWindowTitle(QCoreApplication::translate("QFunctionIndicatorWnd", "Function-Indicator", nullptr));
        m_AddNormalFunc->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\346\231\256\351\200\232\345\207\275\346\225\260", nullptr));
        action1->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\346\236\201\345\235\220\346\240\207\345\207\275\346\225\260", nullptr));
        action2->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\345\217\202\346\225\260\346\226\271\347\250\213\345\207\275\346\225\260", nullptr));
        action1_2->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\345\210\240\351\231\244\344\270\200\344\270\252\345\207\275\346\225\260", nullptr));
        action2_2->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\345\210\240\351\231\244\345\205\250\351\203\250\345\207\275\346\225\260", nullptr));
        action1_3->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\344\277\256\346\224\271\345\207\275\346\225\260\345\217\202\346\225\260", nullptr));
        action1_4->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\350\256\276\347\275\256X-Y\346\230\276\347\244\272\350\214\203\345\233\264", nullptr));
        action2_3->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\347\247\273\345\212\250\346\250\241\345\274\217", nullptr));
        action3->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\345\215\225\345\207\275\346\225\260", nullptr));
        action1_5->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\350\276\271\346\241\206", nullptr));
        action2_4->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\345\235\220\346\240\207\350\275\264", nullptr));
        action3_2->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\347\275\221\346\240\274", nullptr));
        action4->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\345\207\275\346\225\260\344\277\241\346\201\257", nullptr));
        action5->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\345\207\275\346\225\260\345\210\227\350\241\250", nullptr));
        action1_6->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\345\267\245\345\205\267\346\240\217", nullptr));
        action2_5->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\347\212\266\346\200\201\346\240\217", nullptr));
        menu->setTitle(QCoreApplication::translate("QFunctionIndicatorWnd", "\346\267\273\345\212\240\345\207\275\346\225\260", nullptr));
        menu_2->setTitle(QCoreApplication::translate("QFunctionIndicatorWnd", "\344\277\256\346\224\271\345\207\275\346\225\260", nullptr));
        menu_3->setTitle(QCoreApplication::translate("QFunctionIndicatorWnd", "\345\210\240\351\231\244\345\207\275\346\225\260", nullptr));
        menu_4->setTitle(QCoreApplication::translate("QFunctionIndicatorWnd", "\350\256\276\347\275\256", nullptr));
        menu_5->setTitle(QCoreApplication::translate("QFunctionIndicatorWnd", "\346\230\276\347\244\272", nullptr));
        menu_6->setTitle(QCoreApplication::translate("QFunctionIndicatorWnd", "\350\247\206\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QFunctionIndicatorWnd: public Ui_QFunctionIndicatorWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFUNCTIONINDICATORWND_H
