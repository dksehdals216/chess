
#include "Piece.h"

void Piece::setPieceType(int piece_type) 
{
	switch(piece_type)
	{
		case(0):
			piece = none;
			break;
		case(1):
			piece = pawn; 
			break;
		case(2):
			piece = rook;
			break;
		case(3):
			piece = knight;
			break;
		case(4):
			piece = bishop;
			break;
		case(5):
			piece = queen;
			break;
		case(6):
			piece = king;
			break;
	}
}

void Piece::setPieceSide(int color)
{
	if (color > 0)
	{
		color = black;
	}
	else 
	{
		color = white;
	}
}

void Piece::promote()
{

}