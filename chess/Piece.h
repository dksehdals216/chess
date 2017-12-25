
#ifndef PIECE_H
#define PIECE_H

#include "Square.h"
#include "Move.h"

class Piece
{
    public:


        bool pieceStatic();

        void setPieceType(int piece_type);
        void setPieceSide(int color);

        Square getPosition();       //todo::depends whether square is inherited
        void setPosition(Square coord);




        void promote();

        //todo::should piece inherit from square?

        //todo::pieceMove calls functions from move.h with 2 pieces as params

        //tood::pieceCapture called in pieceMove, if its captured takes care of piece state
        
    private:

        void setPieceLife(bool life);
        bool getPieceLife();

        //  Default chess int representation, with none as an empty square
        //  1 ,  1 ,  1 ,  1 ,  1 ,  1 ,  1 ,  1
        //  2 ,  3 ,  4 ,  5 ,  6 ,  4 ,  3 ,  2 

        enum pieceType { pawn, rook, bishop, knight, queen, king, none};
        enum pieceSide { white, black}; //white - 0,  black - 1
        
        pieceType piece;
        pieceSide side;

        Square piece_position;
        bool pieceLife;

};

#endif //PIECE_H
