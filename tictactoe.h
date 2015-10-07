#ifndef tictactoe_H
#define tictactoe_H

#include <QtGui/QMainWindow>

namespace Ui{
  class tictactoe;
}

class tictactoe : public QMainWindow
{
    Q_OBJECT

public:
    tictactoe();
    virtual ~tictactoe();
    
private:
  Ui::tictactoe *ui;

};

#endif // tictactoe_H
