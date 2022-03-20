#include <QApplication>
#include <QPushButton>
#include <iostream>
#include "./ui_37_module_sbx_calc.h"
#include "calc_main_window.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CalcMainWindow window(nullptr);
    Ui::MainWindow calc;
    calc.setupUi(&window);
    window.Output = calc.Output;
    window.resize(480 , 480);
    window.show();

    return QApplication::exec();
}

#include <main.moc>