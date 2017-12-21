#ifndef SQUARE_H
#define SQUARE_H

#include "piece.h"

class Square
{
public:
    
    void setXPos(int v);
    void setYPos(int v);
    int getXPos();
    int getYPos();

private:
    
    int xPos;
    int yPos;
    
}

#endif SQUARE_H
