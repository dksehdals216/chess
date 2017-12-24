
#ifndef PIECE_H
#define PIECE_H

#include "Square.h"

class Piece
{
    public:


        bool pieceStatic();

        void setPieceType(int piece_type);
        void setPieceSide(int color);

        Square getPosition();
        void setPosition(Square coord);


        void setPieceLife();
        bool isPieceDead();

        void promote();
        
    private:

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
