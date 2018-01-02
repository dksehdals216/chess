
#ifndef PIECE_H
#define PIECE_H

#include <string>

#include "Move.h"

class Piece
{
    public:

        //  Default chess int representation, with none as an empty square
        //  1 ,  1 ,  1 ,  1 ,  1 ,  1 ,  1 ,  1
        //  2 ,  3 ,  4 ,  5 ,  6 ,  4 ,  3 ,  2 

        enum pieceType { none, pawn, rook, knight, bishop, queen, king};
        enum pieceSide { white, black, neutral}; //white - 0,  black - 1, empty square are neutral


        void setPieceType(int piece_type);
        void setPieceSide(int color);

        pieceType getPieceType();

        void promote();


        //todo::pieceMove calls functions from move.h with 2 pieces as params

        //tood::pieceCapture called in pieceMove, if its captured takes care of piece state
        
    private:

        void setPieceLife(bool life);
        bool getPieceLife();

        pieceType object_type;
        pieceSide object_side;


        bool object_life;

};

#endif //PIECE_H
