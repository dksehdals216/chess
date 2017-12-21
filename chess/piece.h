
#ifndef PIECE_H
#define PIECE_H


class Piece
{
public:


    bool pieceStatic();
    void setPosition(Square coord);
    Square getPosition();
    void setPieceLife();
    bool isPieceDead();
    void promote();
    
private:

    enum pieceType = { pawn, rook, bishop, knight, queen, king, none};
    enum pieceSide = { white, black};
    
    pieceType piece;
    pieceSide side;
    int xPos;
    int yPos;
    bool pieceLife;

}

#endif PIECE_H
