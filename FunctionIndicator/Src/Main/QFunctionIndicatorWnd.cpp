#include "../../Include/Main/QFunctionIndicatorWnd.h"
#include "ui_QFunctionIndicatorWnd.h"
#include "../../Include/Dialog/QFunctionDlg.h"

QFunctionIndicatorWnd::QFunctionIndicatorWnd(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QFunctionIndicatorWnd)
{
    ui->setupUi(this);
}

QFunctionIndicatorWnd::~QFunctionIndicatorWnd()
{
    delete ui;
}


void QFunctionIndicatorWnd::on_m_AddNormalFunc_triggered()
{
    QFunctionDlg dlg;
    dlg.exec();
}
