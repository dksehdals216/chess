
#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "Board.h"
#include "Game.h"

class Player
{
public:
    
    bool win_cond();
    bool moveValid(std::string alg_n);   //parse string into coordinates, then call function from moves/pieces
    void setTurn();
    bool getTurn();

private:
	
	bool cond = false;
    bool turn = 0;
};


#endif //PLAYER_H
