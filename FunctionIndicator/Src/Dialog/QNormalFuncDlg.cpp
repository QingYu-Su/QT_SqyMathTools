#include "../../Include/Dialog/QNormalFuncDlg.h"
#include "ui_QNormalFuncDlg.h"

QNormalFuncDlg::QNormalFuncDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QNormalFuncDlg)
{
    ui->setupUi(this);
}

QNormalFuncDlg::~QNormalFuncDlg()
{
    delete ui;
}
