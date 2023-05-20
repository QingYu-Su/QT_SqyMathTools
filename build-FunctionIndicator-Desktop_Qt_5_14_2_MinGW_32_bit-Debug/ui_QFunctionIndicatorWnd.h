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
    QAction *m_Add_NormalFunc;
    QAction *m_Add_PolarFunc;
    QAction *m_Add_TwoFuc;
    QAction *m_Del_Func;
    QAction *m_Del_AllFunc;
    QAction *m_Alter_Func;
    QAction *m_Set_XY_Range;
    QAction *m_Set_Move;
    QAction *m_Set_Single;
    QAction *m_Show_Edge;
    QAction *m_Show_Axis;
    QAction *m_Show_Grid;
    QAction *m_Show_FuncInfo;
    QAction *m_Show_FuncList;
    QAction *m_View_ToolBar;
    QAction *m_View_StatusBar;
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
        m_Add_NormalFunc = new QAction(QFunctionIndicatorWnd);
        m_Add_NormalFunc->setObjectName(QString::fromUtf8("m_Add_NormalFunc"));
        m_Add_PolarFunc = new QAction(QFunctionIndicatorWnd);
        m_Add_PolarFunc->setObjectName(QString::fromUtf8("m_Add_PolarFunc"));
        m_Add_TwoFuc = new QAction(QFunctionIndicatorWnd);
        m_Add_TwoFuc->setObjectName(QString::fromUtf8("m_Add_TwoFuc"));
        m_Del_Func = new QAction(QFunctionIndicatorWnd);
        m_Del_Func->setObjectName(QString::fromUtf8("m_Del_Func"));
        m_Del_AllFunc = new QAction(QFunctionIndicatorWnd);
        m_Del_AllFunc->setObjectName(QString::fromUtf8("m_Del_AllFunc"));
        m_Alter_Func = new QAction(QFunctionIndicatorWnd);
        m_Alter_Func->setObjectName(QString::fromUtf8("m_Alter_Func"));
        m_Set_XY_Range = new QAction(QFunctionIndicatorWnd);
        m_Set_XY_Range->setObjectName(QString::fromUtf8("m_Set_XY_Range"));
        m_Set_Move = new QAction(QFunctionIndicatorWnd);
        m_Set_Move->setObjectName(QString::fromUtf8("m_Set_Move"));
        m_Set_Move->setCheckable(true);
        m_Set_Single = new QAction(QFunctionIndicatorWnd);
        m_Set_Single->setObjectName(QString::fromUtf8("m_Set_Single"));
        m_Set_Single->setCheckable(true);
        m_Show_Edge = new QAction(QFunctionIndicatorWnd);
        m_Show_Edge->setObjectName(QString::fromUtf8("m_Show_Edge"));
        m_Show_Edge->setCheckable(true);
        m_Show_Axis = new QAction(QFunctionIndicatorWnd);
        m_Show_Axis->setObjectName(QString::fromUtf8("m_Show_Axis"));
        m_Show_Axis->setCheckable(true);
        m_Show_Grid = new QAction(QFunctionIndicatorWnd);
        m_Show_Grid->setObjectName(QString::fromUtf8("m_Show_Grid"));
        m_Show_Grid->setCheckable(true);
        m_Show_FuncInfo = new QAction(QFunctionIndicatorWnd);
        m_Show_FuncInfo->setObjectName(QString::fromUtf8("m_Show_FuncInfo"));
        m_Show_FuncInfo->setCheckable(true);
        m_Show_FuncList = new QAction(QFunctionIndicatorWnd);
        m_Show_FuncList->setObjectName(QString::fromUtf8("m_Show_FuncList"));
        m_Show_FuncList->setCheckable(true);
        m_View_ToolBar = new QAction(QFunctionIndicatorWnd);
        m_View_ToolBar->setObjectName(QString::fromUtf8("m_View_ToolBar"));
        m_View_ToolBar->setCheckable(true);
        m_View_StatusBar = new QAction(QFunctionIndicatorWnd);
        m_View_StatusBar->setObjectName(QString::fromUtf8("m_View_StatusBar"));
        m_View_StatusBar->setCheckable(true);
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
        menu->addAction(m_Add_NormalFunc);
        menu->addAction(m_Add_PolarFunc);
        menu->addAction(m_Add_TwoFuc);
        menu_2->addAction(m_Alter_Func);
        menu_3->addAction(m_Del_Func);
        menu_3->addAction(m_Del_AllFunc);
        menu_4->addAction(m_Set_XY_Range);
        menu_4->addAction(m_Set_Move);
        menu_4->addAction(m_Set_Single);
        menu_5->addAction(m_Show_Edge);
        menu_5->addAction(m_Show_Axis);
        menu_5->addAction(m_Show_Grid);
        menu_5->addAction(m_Show_FuncInfo);
        menu_5->addAction(m_Show_FuncList);
        menu_6->addAction(m_View_StatusBar);

        retranslateUi(QFunctionIndicatorWnd);

        QMetaObject::connectSlotsByName(QFunctionIndicatorWnd);
    } // setupUi

    void retranslateUi(QMainWindow *QFunctionIndicatorWnd)
    {
        QFunctionIndicatorWnd->setWindowTitle(QCoreApplication::translate("QFunctionIndicatorWnd", "Function-Indicator", nullptr));
        m_Add_NormalFunc->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\346\231\256\351\200\232\345\207\275\346\225\260", nullptr));
        m_Add_PolarFunc->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\346\236\201\345\235\220\346\240\207\345\207\275\346\225\260", nullptr));
        m_Add_TwoFuc->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\345\217\202\346\225\260\346\226\271\347\250\213\345\207\275\346\225\260", nullptr));
        m_Del_Func->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\345\210\240\351\231\244\344\270\200\344\270\252\345\207\275\346\225\260", nullptr));
        m_Del_AllFunc->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\345\210\240\351\231\244\345\205\250\351\203\250\345\207\275\346\225\260", nullptr));
        m_Alter_Func->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\344\277\256\346\224\271\345\207\275\346\225\260\345\217\202\346\225\260", nullptr));
        m_Set_XY_Range->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\350\256\276\347\275\256X-Y\346\230\276\347\244\272\350\214\203\345\233\264", nullptr));
        m_Set_Move->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\347\247\273\345\212\250\346\250\241\345\274\217", nullptr));
        m_Set_Single->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\345\215\225\345\207\275\346\225\260", nullptr));
        m_Show_Edge->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\350\276\271\346\241\206", nullptr));
        m_Show_Axis->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\345\235\220\346\240\207\350\275\264", nullptr));
        m_Show_Grid->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\347\275\221\346\240\274", nullptr));
        m_Show_FuncInfo->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\345\207\275\346\225\260\344\277\241\346\201\257", nullptr));
        m_Show_FuncList->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\345\207\275\346\225\260\345\210\227\350\241\250", nullptr));
        m_View_ToolBar->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\345\267\245\345\205\267\346\240\217", nullptr));
        m_View_StatusBar->setText(QCoreApplication::translate("QFunctionIndicatorWnd", "\347\212\266\346\200\201\346\240\217", nullptr));
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
