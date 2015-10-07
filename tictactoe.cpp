#include "tictactoe.h"
#include "gui/ui_tttgui.h"


tictactoe::tictactoe()
{  
  ui = new(Ui::tictactoe);
  ui->setupUi(this);
}

tictactoe::~tictactoe()
{}

#include "tictactoe.moc"
