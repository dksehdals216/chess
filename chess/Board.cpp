
#include <iostream>
#include <array>

#include "Board.h"

Board::Board()
{
    clearBoardNone();
    initDefaultBoard();
    drawBoard();
}


void Board::drawBoard ()
{
    std::cout << "\n" << std::endl;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j< 8; j++)
        {
            std::cout << board[i][j].getPieceType();
        }
        std::cout << std::endl;
    }
}
    
void Board::setBoard(int initX, int initY, int destX, int destY, int side_color)
{
    int init_type = board[initX][initY].getPieceType();
    board[initX][initY].setPieceSide(3);
    board[initX][initY].setPieceType(0);

    board[destX][destY].setPieceType(init_type);
    board[destX][destY].setPieceSide(side_color);
}

void Board::clearBoardNone ()
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j< 8; j++)
        {
            board[i][j].setPieceType(0);
            board[i][j].setPieceSide(3);   
        }
    }
}

//todo:: set pieceLife as well
void Board::initDefaultBoard ()
{

    int j = 4;

    //set black pieces
    for(int i = 0; i < 8; i++)
    {
        if ( i < 5 )
        {
            board[0][i].setPieceSide(1);
            board[0][i].setPieceType(i+2);
        }
        else
        {
            board[0][i].setPieceSide(1);
            board[0][i].setPieceType(j--);
        }
    }

    //black pawns
    for(int i = 0; i < 8; i++)
    {
        board[1][i].setPieceSide(1);
        board[1][i].setPieceType(1);
    }

    j = 4;

    //set white pieces
    for(int i = 0; i < 8; i++)
    {
        if ( i < 5 )
        {
            board[7][i].setPieceSide(1);
            board[7][i].setPieceType(i+2);
        }
        else
        {
            board[7][i].setPieceSide(1);
            board[7][i].setPieceType(j--);
        }
    }

    //black pawns
    for(int i = 0; i < 8; i++)
    {
        board[6][i].setPieceSide(1);
        board[6][i].setPieceType(1);
    }
}