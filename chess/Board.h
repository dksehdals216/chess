#ifndef BOARD_H_
#define BOARD_H_

#include <iostream>
#include <array>

#include "Piece.h"

class Board
{

			
	public:

		Board ();

		void clearBoardNone ();

	    void setBoard(int initX, int initY, int destX, int destY, int side_color);
	    char getPiecePosition(Piece piece); 
		//void drawBoard(std::array<std::array<int, 8>, 8> &n); 

	private:
		
		void initDefaultBoard ();
		void drawBoard(); 


		std::array<std::array<Piece, 8>, 8> board;

};


#endif 


/*

sample board 


		        { -2 ,  -3 ,  -4 ,  -5 ,  -6 ,  -4 ,  -3 ,  -2 },
		        { -1 ,  -1 ,  -1 ,  -1 ,  -1 ,  -1 ,  -1 ,  -1 },
		        {  0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 },
		        {  0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 },
		        {  0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 },
		        {  0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 },
		        {  1 ,   1 ,   1 ,   1 ,   1 ,   1 ,   1 ,   1 },
		        {  2 ,   3 ,   4 ,   5 ,   6 ,   4 ,   3 ,   2 },
		     
*/