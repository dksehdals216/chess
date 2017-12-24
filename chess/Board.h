#ifndef BOARD_H_
#define BOARD_H_

#include <iostream>
#include <array>

#include "Piece.h"

class Board
{

	std::array<std::array<Piece, 8>, 8> board;
			
	public:

		void clearBoardNone(std::array<std::array<Piece, 8>, 8>& inp_board);
		void initDefaultBoard(std::array<std::array<Piece, 8>, 8> &inp_board);

	    void setBoard();
	    char askPiecePosition(); 
		//void drawBoard(std::array<std::array<int, 8>, 8> &n); 

	private:

		void drawBoard(std::array<std::array<Piece, 8>, 8>& inp_board); 

};


#endif 


/*

sample board 

{{
		        { -2 ,  -3 ,  -4 ,  -5 ,  -6 ,  -4 ,  -3 ,  -2 },
		        { -1 ,  -1 ,  -1 ,  -1 ,  -1 ,  -1 ,  -1 ,  -1 },
		        { 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 },
		        { 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 },
		        { 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 },
		        { 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 },
		        { 1 ,  1 ,  1 ,  1 ,  1 ,  1 ,  1 ,  1 },
		        { 2 ,  3 ,  4 ,  5 ,  6 ,  4 ,  3 ,  2 },
		    }};
*/