#include <QtGui/QApplication>
#include "tictactoe.h"


int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    tictactoe tictactoe;
    tictactoe.show();
    return app.exec();
}
