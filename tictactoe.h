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
