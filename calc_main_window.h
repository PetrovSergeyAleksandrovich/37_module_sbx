//
// Created by Poizone on 19.03.2022.
//

#ifndef INC_37_MODULE_SBX_CALC_MAIN_WINDOW_H
#define INC_37_MODULE_SBX_CALC_MAIN_WINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QDebug>

class CalcMainWindow: public QMainWindow
{
    Q_OBJECT
public:

    QLineEdit* Input_1 =  new QLineEdit();
    QLineEdit* Input_2 = new QLineEdit();
    QLineEdit* Output = new QLineEdit();
    QSlider* hSlider = new QSlider();

    CalcMainWindow(QWidget* parent = nullptr): QMainWindow(parent)
    {
        qDebug() << "CalcMainWindow created";
        qDebug() << Input_1->text() << Input_2->text() << Output->text();
        hSlider->setMaximum(100);
        hSlider->setMinimum(0);
    }

public slots:
    void sum()
    {
        qDebug() << "\ncall sum()";
        double x = 0.0f, y = 0.0f;

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
        double x = 0, y = 0;

        x = Input_1->text().toDouble();
        y = Input_2->text().toDouble();

        if(y == 0){
            qCritical("error");
            Output->setText("нельзя делить на НОЛЬ");
            return;
        }

        qDebug() << x << " / " << y << " = " << x + y;

        QString str = Input_1->text() + " / " + Input_2->text() + " = " + QString::number(x/y);
        qDebug() << "print string at divide(): " << Input_1->text() << " / " << Input_2->text();

        Output->setText(str);

    };
    void multy()
    {
        qDebug() << "\ncall multy()";
        double x = 0, y = 0;

        x = Input_1->text().toDouble();
        y = Input_2->text().toDouble();
        qDebug() << x << " * " << y << " = " << x * y;

        QString str = Input_1->text() + " * " + Input_2->text() + " = " + QString::number(x*y);
        qDebug() << "print string at multy(): " << Input_1->text() << " * " << Input_2->text();

        Output->setText(str);
        Output->setText(str);
    };
    void minus()
    {
        qDebug() << "\ncall minus()";
        double x = 0, y = 0;

        x = Input_1->text().toDouble();
        y = Input_2->text().toDouble();
        qDebug() << x << " - " << y << " = " << x - y;

        QString str = Input_1->text() + " - " + Input_2->text() + " = " + QString::number(x-y);
        qDebug() << "print string at minus(): " << Input_1->text() << " - " << Input_2->text();

        Output->setText(str);
    };

    void slider()
    {
        qDebug() << "\ncall test()";
        qDebug() << hSlider->value();
        Output->setText(QString::number(hSlider->value()));
    }
};

#endif //INC_37_MODULE_SBX_CALC_MAIN_WINDOW_H
