#include <QApplication>
#include "calc_main_window.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug("~1");

    Ui::MainWindow calc;
    qDebug("~2");

    CalcMainWindow window(&calc, nullptr);
    qDebug("~3");

    calc.setupUi(&window);
    qDebug("~4");

    window.resize(480 , 480);
    qDebug("~5");

    window.show();
    qDebug("~6");

    return QApplication::exec();
}

#include <main.moc>