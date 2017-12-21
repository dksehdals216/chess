
#ifndef PLAYER_H
#define PLAYER_H

#include "board.h"
#include "game.h"

class Player
{
public:
    
    bool win_cond();
    bool moveValid(string alg_n);   //parse string into coordinates, then call function from moves/pieces
    void setTurn();
    bool getTurn();

private:
    bool turn = 0;
}


#endif PLAYER_H
