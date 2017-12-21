#ifndef BOARD_H
#define BOARD_H

#include <iostream>


class Board
{
public:
   
    Board(){}

    void setBoard();
    void drawBoard(); 
    char posQuery();

private: 
    const int board_size = 8;
    int board[board_size][board_size];
}


#endif BOARD_H
