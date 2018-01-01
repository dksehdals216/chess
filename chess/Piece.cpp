
#include "Piece.h"

void Piece::setPieceType(int piece_type) 
{
	switch(piece_type)
	{
		case(0):
			object_type = none;
			setPieceLife(0);
			break;
		case(1):
			object_type = pawn; 
			setPieceLife(1);
			break;
		case(2):
			object_type = rook;
			setPieceLife(1);
			break;
		case(3):
			object_type = knight;
			setPieceLife(1);
			break;
		case(4):
			object_type = bishop;
			setPieceLife(1);
			break;
		case(5):
			object_type = queen;
			setPieceLife(1);
			break;
		case(6):
			object_type = king;
			setPieceLife(1);
			break;
	}
}

void Piece::setPieceSide(int color)
{
	if (color ==  1)
	{
		object_side = black;
	}
	else if (color == 0)
	{
		object_side = white;
	}
	else
	{
		object_side = neutral;
	}
}

Piece::pieceType Piece::getPieceType()
{
	return object_type;
}

void Piece::setPieceLife(bool life)
{
	object_life = life;
}

bool Piece::getPieceLife()
{
	return object_side;
}

void Piece::promote()
{
	setPieceType(6);	//todo::rewrite this
}

