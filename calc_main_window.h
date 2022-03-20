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

    CalcMainWindow(QWidget* parent = nullptr): QMainWindow(parent){}

public slots:
    void sum()
    {
        int x = 0, y = 0;

        x = Input_1->text().toInt();
        y = Input_2->text().toInt();

        qDebug() << x << " + " << y << " = " << x + y;

        QString str = Input_1->text() + " + " + Input_1->text() + " = " + QString::number(x+y);

        Output->setText(str);
    };

    void divide()
    {
        QString str = "divide";
        Output->setText(str);
    };
    void multy()
    {
        QString str = "multy";
        Output->setText(str);
    };
    void minus()
    {
        QString str = "minus";
        Output->setText(str);
    };
};

#endif //INC_37_MODULE_SBX_CALC_MAIN_WINDOW_H
