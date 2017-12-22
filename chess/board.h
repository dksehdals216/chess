#ifndef BOARD_H_
#define BOARD_H_

#include <iostream>
#include <array>



class Board
{


	public:

		std::array<std::array<char, 8>, 8> board;

		Board()
		{
			//has 2 braces due to the outside brace for uniform init. check std::array
			 board = 
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
		}

	    void setBoard();
	    char posQuery(); 

	private:

		void drawBoard(const std::array<std::array<int, 8>, 8>& n, int size); 

};


#endif 
