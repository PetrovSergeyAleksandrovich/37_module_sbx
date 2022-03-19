//
// Created by Poizone on 19.03.2022.
//

#ifndef INC_37_MODULE_SBX_CALC_MAIN_WINDOW_H
#define INC_37_MODULE_SBX_CALC_MAIN_WINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <iostream>

class CalcMainWindow: public QMainWindow
{
    Q_OBJECT
public:

    QLineEdit* Input_1 = nullptr;
    QLineEdit* Input_2 = nullptr;
    QLineEdit* Output = nullptr;

    CalcMainWindow(QWidget* parent = nullptr): QMainWindow(parent){}

public slots:
    void sum()
    {
        QString x = Input_1->text();
        QString y = Input_2->text();

        QString str = "sum = " + x + y;
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
