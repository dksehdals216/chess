
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
    void move();


private:
	
	bool win_condition = false;

	//switch beetween turns, always have 2 players, and current turn is player who was turn
	//set to true
    bool turn = false;
    int player_side;

};


#endif //PLAYER_H
