
#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "Board.h"
#include "Game.h"

class Player
{
public:
    
    //note that player will call member functions of Board class each turn, 
    // and will use that input to determine whether move was valid or not,
    // and if turn has ended or not.
    bool win_cond();
    void setTurn();
    bool getTurn();

private:
	
	bool cond = false;
    bool turn = 0;
};


#endif //PLAYER_H
