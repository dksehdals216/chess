
#include <iostream>
#include <array>

#include "Board.h"

Board::Board()
{
    clearBoardNone(board);
    initDefaultBoard(board);
    drawBoard(board);
}


void Board::drawBoard(std::array<std::array<Piece, 8>, 8> &inp_board)
{
    std::cout << "\n" << std::endl;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j< 8; j++)
        {
            std::cout << inp_board[i][j].getPieceType();
        }
        std::cout << std::endl;
    }
}
    
void Board::setBoard(int initX, int initY, int destX, int destY)
{

}

void Board::clearBoardNone (std::array<std::array<Piece, 8>, 8> &inp_board)
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j< 8; j++)
        {
            inp_board[i][j].setPieceType(0);
            inp_board[i][j].setPieceSide(3);   
        }
    }
}

//todo:: set pieceLife as well
void Board::initDefaultBoard(std::array<std::array<Piece, 8>, 8> &inp_board)
{

    int j = 4;

    //set black pieces
    for(int i = 0; i < 8; i++)
    {
        if ( i < 5 )
        {
            inp_board[0][i].setPieceSide(1);
            inp_board[0][i].setPieceType(i+2);
        }
        else
        {
            inp_board[0][i].setPieceSide(1);
            inp_board[0][i].setPieceType(j--);
        }
    }

    //black pawns
    for(int i = 0; i < 8; i++)
    {
        inp_board[1][i].setPieceSide(1);
        inp_board[1][i].setPieceType(1);
    }

    j = 4;

    //set white pieces
    for(int i = 0; i < 8; i++)
    {
        if ( i < 5 )
        {
            inp_board[7][i].setPieceSide(1);
            inp_board[7][i].setPieceType(i+2);
        }
        else
        {
            inp_board[7][i].setPieceSide(1);
            inp_board[7][i].setPieceType(j--);
        }
    }

    //black pawns
    for(int i = 0; i < 8; i++)
    {
        inp_board[6][i].setPieceSide(1);
        inp_board[6][i].setPieceType(1);
    }
}