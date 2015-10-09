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

#ifndef tictactoe_H
#define tictactoe_H

#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>

namespace Ui{
  class tictactoe;
}

class tictactoe : public QMainWindow
{
    Q_OBJECT

public:
    tictactoe();
    virtual ~tictactoe();
    
private slots:
    void on_btnTL_clicked();
    void on_btnTC_clicked();
    void on_btnTR_clicked();
    void on_btnML_clicked();
    void on_btnMC_clicked();
    void on_btnMR_clicked();
    void on_btnBL_clicked();
    void on_btnBC_clicked();
    void on_btnBR_clicked();
    void on_btnNew_clicked();
    
private:
  enum boardSpaces_t {TL, TC, TR, ML, MC, MR, BL, BC, BR};
  enum spaceState_t {enable, disable};
  enum gameState_t {pending, winner, tie};
  gameState_t gameState;
  static QString chrPlayerMarker[];
  Ui::tictactoe *ui;
  QPushButton *GameSpaces[9];
  int intPlayerMoves[9];
  int intCurrentPlayer;
  static const long lngWinningCombos[];
  
  void InitGame();
  void PlayerMove(boardSpaces_t);
  void ToggleGameSpaces(spaceState_t);
};

#endif // tictactoe_H
