
#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "Board.h"


class Player
{
public:
    
    //note that player will call member functions of Board class each turn, 
    // and will use that input to determine whether move was valid or not,
    // and if turn has ended or not.
    bool checkWinCondition();
    void setTurn();
    bool getTurn();


private:
	
	bool win_condition = false;
    bool turn = 0;
};


#endif //PLAYER_H
