
#include <iostream>

#include "board.h"


void Board::drawBoard(const std::array<std::array<int, 8>, 8>& n, int size)
{
    std::cout << "\n" << std::endl;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j< size; j++)
        {
            std::cout << n[i][j];
        }
        std::cout << std::endl;
    }
}
    
void Board::setBoard()
{
    drawBoard(board, 8);
}
