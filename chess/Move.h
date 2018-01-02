
#ifndef MOVE_H
#define MOVE_H


#include <string>

class Move
{
	public:
	    
	    bool checkMove();	

	    /*
	    Todo:
	    	Take init move,
	    	check if move is inbounds
	    	check if captures -> modify state on board
	    	check if move forces a check on current player

	    	call gen move and calculate all moves
	    	check if check or mate
		
		checklist:
			Direct Attack or Discovered check or both
			same with move from our side, does it expose this players king to a check? invalid
			stalemate for when no moves are available at all.
			

	    */

	private:

		bool isMove_bounds();

		bool isValid = false;
		

};    


#endif //MOVE_H
