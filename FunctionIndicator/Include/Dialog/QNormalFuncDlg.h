#ifndef QNORMALFUNCDLG_H
#define QNORMALFUNCDLG_H

#include <QDialog>
#include "MathFunction.h"
namespace SML = SqyMathLibrary;  //命名空间重命名

namespace Ui {
class QNormalFuncDlg;
}

class QNormalFuncDlg : public QDialog
{
    Q_OBJECT

public:
    explicit QNormalFuncDlg(QWidget *parent = nullptr);
    ~QNormalFuncDlg();

private:
    Ui::QNormalFuncDlg *ui;
};

#endif // QNORMALFUNCDLG_H
