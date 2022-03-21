#pragma once
#include <QMainWindow>
#include <QDebug>
#include "./ui_37_module_sbx_calc.h"

class CalcMainWindow: public QMainWindow
{
    Q_OBJECT
public:

    Ui::MainWindow* calc = nullptr;

    CalcMainWindow(Ui::MainWindow* inCalc, QWidget* parent = nullptr): calc(inCalc), QMainWindow(parent)
    {
        qDebug("~class CalcMainWindow created");
    }

};
