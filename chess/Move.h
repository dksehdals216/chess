
#ifndef MOVE_H
#define MOVE_H

#include "Piece.h"
#include "Square.h"
#include "Board.h"

#include <string>

class Move
{
	public:
	    
	    bool validMove(Piece piece, Square dest_sq);

}    


#endif //MOVE_H
