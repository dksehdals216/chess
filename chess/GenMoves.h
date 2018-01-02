
#ifndef GENMOVES_H
#define GENMOVES_H


class GenMoves
{
public:
    
	/*
	todo:
		list all moves after initial moves,
		by
			go through all pieces
			pawn - move forward 1, or 2 if it hasn't moved, move diagonal by 1 to kill
			knight - move two then 1, note it ignores collision directly
			bisho - moves diagonal, cannot avoid collision
			rook - moves cross
			queen - moves cross and diagonal
			king - moves 1 square cross+diagonal, but have to check if  area is not in check

	*/

private:
    

    
};

#endif //GENMOVES_H
