/*
    A Simple Tic-Tac-Toe game
    
    Copyright (C) 2015  Mark Fitch

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#include "tictactoe.h"
#include "ui_tictactoe.h"
#include <math.h> /* for pow */


//bitwise representations of winning square combinations
const int tictactoe::intWinningCombos[] = {7, 56, 448, 273, 73, 146, 84, 292};

QString tictactoe::chrPlayerMarker[] = {"X", "O"};

tictactoe::tictactoe()
{  
  ui = new(Ui::tictactoe);
  ui->setupUi(this);
  
  GameSpaces[0] = ui->btnTL;
  GameSpaces[1] = ui->btnTC;
  GameSpaces[2] = ui->btnTR;
  GameSpaces[3] = ui->btnML;
  GameSpaces[4] = ui->btnMC;
  GameSpaces[5] = ui->btnMR;
  GameSpaces[6] = ui->btnBL;
  GameSpaces[7] = ui->btnBC;
  GameSpaces[8] = ui->btnBR;
  
  InitGame();
}

tictactoe::~tictactoe()
{

}

void tictactoe::on_btnTL_clicked()
{
  PlayerMove(TL);
}

void tictactoe::on_btnTC_clicked()
{
  PlayerMove(TC);
}
void tictactoe::on_btnTR_clicked()
{
  PlayerMove(TR);
}

void tictactoe::on_btnML_clicked()
{
  PlayerMove(ML);
}

void tictactoe::on_btnMC_clicked()
{
  PlayerMove(MC);
}

void tictactoe::on_btnMR_clicked()
{
  PlayerMove(MR);
}

void tictactoe::on_btnBL_clicked()
{
  PlayerMove(BL);
}

void tictactoe::on_btnBC_clicked()
{
  PlayerMove(BC);
}

void tictactoe::on_btnBR_clicked()
{
  PlayerMove(BR);
}

void tictactoe::on_btnNew_clicked()
{
  InitGame();
}

void tictactoe::InitGame()
{
  for(int i=0; i<9; i++)
  {
    intPlayerMoves[i] = -1;
    GameSpaces[i]->setText(QString());
    ToggleGameSpaces(enable);
    intCurrentPlayer = 0;
    ui->lblMessages->setText(QString("X's Turn"));
  }
  
  gameState = pending;
}

void tictactoe::PlayerMove(boardSpaces_t space)
{
  int intPlayerNum = intCurrentPlayer % 2;
  static int intMovesTaken = 0;
  
  GameSpaces[space]->setText(chrPlayerMarker[intPlayerNum]);
  GameSpaces[space]->setEnabled(false);
  intPlayerMoves[space] = intPlayerNum;
  intMovesTaken++;
  
  //check if player won
  int intClaimedSpaces = 0;
  for(int i=0; i<9; i++)
  {
    if(intPlayerMoves[i] == intPlayerNum)
    {
      intClaimedSpaces = intClaimedSpaces + pow(2, i);
    }
  }
  
  for(int i=0; i < 8; i++)
  {
    if((intClaimedSpaces & intWinningCombos[i]) == intWinningCombos[i])
    {
      gameState = winner;
      break;
    }
  }
  
  if(gameState == pending && intMovesTaken == 9)
    gameState = tie;
  
  switch(gameState)
  {
    case pending:
      intCurrentPlayer++;
      intPlayerNum = intCurrentPlayer % 2;
      ui->lblMessages->setText(chrPlayerMarker[intPlayerNum] + QString("'s Turn"));
      break;
    case winner:
      ui->lblMessages->setText(chrPlayerMarker[intPlayerNum] + QString(" Wins!"));
      ToggleGameSpaces(disable);
      intMovesTaken = 0;
      break;
    case tie:
      ui->lblMessages->setText(QString("Tie Game!"));
      intMovesTaken = 0;
      break;
  }
}

void tictactoe::ToggleGameSpaces(spaceState_t state)
{
  for(int i=0; i<9; i++)
  {
    switch(state)
    {
      case enable:
	GameSpaces[i]->setEnabled(true);
	break;
      case disable:
	GameSpaces[i]->setEnabled(false);
	break;
    }
  }
}


#include "tictactoe.moc"
