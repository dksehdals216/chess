
#include "Piece.h"

void Piece::setPieceType(int piece_type) 
{
	switch(piece_type)
	{
		case(0):
			piece = none;
			setPieceLife(0);
			break;
		case(1):
			piece = pawn; 
			setPieceLife(1);
			break;
		case(2):
			piece = rook;
			setPieceLife(1);
			break;
		case(3):
			piece = knight;
			setPieceLife(1);
			break;
		case(4):
			piece = bishop;
			setPieceLife(1);
			break;
		case(5):
			piece = queen;
			setPieceLife(1);
			break;
		case(6):
			piece = king;
			setPieceLife(1);
			break;
	}
}

void Piece::setPieceSide(int color)
{
	if (color > 0)
	{
		side = black;
	}
	else 
	{
		side = white;
	}
}

void Piece::setPieceLife(bool life)
{
	pieceLife = life;
}

bool Piece::getPieceLife()
{
	return pieceLife;
}

void Piece::promote()
{
	setPieceType(6);

}

