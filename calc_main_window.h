//
// Created by Poizone on 19.03.2022.
//

#ifndef INC_37_MODULE_SBX_CALC_MAIN_WINDOW_H
#define INC_37_MODULE_SBX_CALC_MAIN_WINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <QDebug>

class CalcMainWindow: public QMainWindow
{
    Q_OBJECT
public:

    QLineEdit* Input_1 =  new QLineEdit();
    QLineEdit* Input_2 = new QLineEdit();
    QLineEdit* Output = new QLineEdit();

    CalcMainWindow(QWidget* parent = nullptr): QMainWindow(parent)
    {
        qDebug() << "CalcMainWindow created";
        Input_1->setText("0");
        Input_2->setText("0");
        Output->setText("0");
        qDebug() << Input_1->text() << Input_2->text() << Output->text();
    }

public slots:
    void sum()
    {
        qDebug() << "\ncall sum()";
        int x = 0, y = 0;

        x = Input_1->text().toDouble();
        y = Input_2->text().toDouble();
        qDebug() << x << " + " << y << " = " << x + y;

        QString str = Input_1->text() + " + " + Input_2->text() + " = " + QString::number(x+y);
        qDebug() << "print string at sum(): " << Input_1->text() << " + " << Input_2->text();

        Output->setText(str);
    };

    void divide()
    {
        qDebug() << "\ncall divide()";
        int x = 0, y = 0;

        x = Input_1->text().toDouble();
        y = Input_2->text().toDouble();

        if(y == 0){
            Output->setText("нельзя делить на НОЛЬ");
            return;
        }

        qDebug() << x << " / " << y << " = " << x + y;

        QString str = Input_1->text() + " / " + Input_2->text() + " = " + QString::number(x/y);
        qDebug() << "print string at sum(): " << Input_1->text() << " / " << Input_2->text();

        Output->setText(str);

    };
    void multy()
    {
        qDebug() << "\ncall multy()";
        int x = 0, y = 0;

        x = Input_1->text().toDouble();
        y = Input_2->text().toDouble();
        qDebug() << x << " * " << y << " = " << x * y;

        QString str = Input_1->text() + " * " + Input_2->text() + " = " + QString::number(x*y);
        qDebug() << "print string at sum(): " << Input_1->text() << " * " << Input_2->text();

        Output->setText(str);
        Output->setText(str);
    };
    void minus()
    {
        qDebug() << "\ncall minus()";
        int x = 0, y = 0;

        x = Input_1->text().toDouble();
        y = Input_2->text().toDouble();
        qDebug() << x << " - " << y << " = " << x - y;

        QString str = Input_1->text() + " - " + Input_2->text() + " = " + QString::number(x-y);
        qDebug() << "print string at sum(): " << Input_1->text() << " - " << Input_2->text();

        Output->setText(str);
        Output->setText(str);
    };
};

#endif //INC_37_MODULE_SBX_CALC_MAIN_WINDOW_H
