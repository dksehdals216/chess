
#include <iostream>
#include <array>

#include "Board.h"


void Board::drawBoard(std::array<std::array<Piece, 8>, 8> &inp_board)
{
    std::cout << "\n" << std::endl;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j< 8; j++)
        {
            //std::cout << n[i][j];
        }
        //std::cout << std::endl;
    }
}
    
void Board::setBoard()
{

}

void Board::clearBoardNone (std::array<std::array<Piece, 8>, 8> &inp_board)
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j< 8; j++)
        {
            inp_board[i][j].setPieceType(0);
        }
    }
}

//todo:: set pieceLife as well
void initDefaultBoard(std::array<std::array<Piece, 8>, 8> &inp_board)
{
    int i;

    //set black pieces
    for(i = 0; i < 5; i++)
    {
        inp_board[0][i].setPieceSide(1);
        inp_board[0][i].setPieceType(i+2);
    }
    inp_board[0][i].setPieceSide(1);
    inp_board[0][i].setPieceType(i-1);
    inp_board[0][i].setPieceSide(1);
    inp_board[0][i].setPieceType(i-2);
    inp_board[0][i].setPieceSide(1);
    inp_board[0][i].setPieceType(i-3);

    for(i = 0; i < 8; i++)
    {
        inp_board[1][i].setPieceSide(1);
        inp_board[1][i].setPieceType(i);   
    }

    //set white pieces
    for(i = 0; i < 5; i++)
    {
        inp_board[7][i].setPieceSide(0);
        inp_board[7][i].setPieceType(i+2);
    }
    inp_board[7][i].setPieceSide(0);
    inp_board[7][i].setPieceType(i-1);
    inp_board[7][i].setPieceSide(0);
    inp_board[7][i].setPieceType(i-2);
    inp_board[7][i].setPieceSide(0);
    inp_board[7][i].setPieceType(i-3);

    for(i = 0; i < 8; i++)
    {
        inp_board[6][i].setPieceSide(0);
        inp_board[6][i].setPieceType(i);   
    }

    //setting blank space in middle
    for(i = 2; i < 5; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            inp_board[i][j].setPieceType(0);
        }
    }
}