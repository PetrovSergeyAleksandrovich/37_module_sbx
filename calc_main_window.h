#include <QMainWindow>
#include <QDebug>
#include "./ui_37_module_sbx_calc.h"

class CalcMainWindow: public QMainWindow
{
    Q_OBJECT
public:

    float x = 0.0f, y = 0.0f;

    Ui::MainWindow* calc = nullptr;

    CalcMainWindow(Ui::MainWindow* inCalc, QWidget* parent = nullptr): calc(inCalc), QMainWindow(parent)
    {
        qDebug("~class CalcMainWindow created");
    }

public slots:

    void sum()
    {
        x = calc->Input_1->text().toDouble();
        y = calc->Input_2->text().toDouble();
        qDebug() << x << " + " << y << " = " << QString::number(x + y);
        calc->Output->setText(QString::number((x + y)));
    }

    void minus()
    {
        x = calc->Input_1->text().toDouble();
        y = calc->Input_2->text().toDouble();
        qDebug() << x << " - " << y << " = " << QString::number(x - y);
        calc->Output->setText(QString::number((x - y)));
    };

    void divide()
    {
        x = calc->Input_1->text().toDouble();
        y = calc->Input_2->text().toDouble();

        if(y == 0.0f)
        {
            calc->Output->setText(QString("на ноль делить нельзя"));
            qDebug("~на ноль делить нельзя");
            return;
        }
        qDebug() << x << " / " << y << " = " << QString::number(x / y);
        calc->Output->setText(QString::number((x / y)));
    };

    void multy()
    {
        x = calc->Input_1->text().toDouble();
        y = calc->Input_2->text().toDouble();
        qDebug() << x << " * " << y << " = " << QString::number(x * y);
        calc->Output->setText(QString::number((x * y)));
    };
};
