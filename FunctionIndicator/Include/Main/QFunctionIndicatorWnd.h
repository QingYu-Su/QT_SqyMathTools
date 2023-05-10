#ifndef QFUNCTIONINDICATORWND_H
#define QFUNCTIONINDICATORWND_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class QFunctionIndicatorWnd; }
QT_END_NAMESPACE

class QFunctionIndicatorWnd : public QMainWindow
{
    Q_OBJECT

public:
    QFunctionIndicatorWnd(QWidget *parent = nullptr);
    ~QFunctionIndicatorWnd();

private slots:
    void on_m_AddNormalFunc_triggered();

private:
    Ui::QFunctionIndicatorWnd *ui;
};
#endif // QFUNCTIONINDICATORWND_H
