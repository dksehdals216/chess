#include <SFML/Graphics.hpp>
#include <time.h>
#include <string>
#include <iostream>
using namespace sf;

int defSize = 56;
int marginSize = 27;
Sprite f[32]; //figures¬                                                             
int board[8][8] = 
{
		         -1 ,  -2 ,  -3 ,  -4 ,  -5 ,  -3 ,  -2 ,  -1 ,
		         -6 ,  -6 ,  -6 ,  -6 ,  -6 ,  -6 ,  -6 ,  -6 ,
		          0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,
		          0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,
		          0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,
		          0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,
		          6 ,   6 ,   6 ,   6 ,   6 ,   6 ,   6 ,   6 ,
		          1 ,   2 ,   3 ,   4 ,   5 ,   3 ,   2 ,   1 

};                      


std::string toChessNote (Vector2f p)
{
    std::string s = "";
    s += char(p.x/defSize+97);
    s += char(7-p.y/defSize+49);
    return s;
}

//todo::change this function so that it also includes all other units.
void loadPosition()
{
    int k = 0;
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
        {
            int n = board[i][j];
            if (!n) continue;
            int x = abs(n) - 1;
            int y = n > 0 ? 1:0;
            f[k].setTextureRect( IntRect(defSize*x, defSize*y, defSize, defSize));
            f[k].setPosition(defSize*j + marginSize, defSize*i + marginSize);
            k++;
        }
}


int main()
{
    int windowSize = 504;
    RenderWindow window(VideoMode(windowSize, windowSize), "The Chess");

	Texture t1,t2;
	//t1.loadFromFile("../images/figures.png", IntRect(0, 0, 340/6, 60));
    t1.loadFromFile("../images/figures.png"); 
    t2.loadFromFile("../images/board.png");

    Sprite sBoard(t2);
	Sprite s(t1);
   
    //sets textures to sprites inside f array, is resized by loadPosition()
    for(int i = 0; i < 32; i++)
    {
        f[i].setTexture(t1);
    }

    loadPosition();

    bool isMove = false;
    float dx = 0, dy = 0;
    Vector2f oldPos, newPos;
    std::string str;
    int n = 0;

	while (window.isOpen())
	{
        Vector2i pos = Mouse::getPosition(window);	
        Event e;
		while (window.pollEvent(e))
		{
			if (e.type == Event::Closed)
				window.close();
            
            //drag and drop
            if (e.type == Event::MouseButtonPressed)
                if (e.key.code == Mouse::Left)
                    for(int i = 0; i < 32; i++)
                    {

                        if (f[i].getGlobalBounds().contains(pos.x, pos.y))
                        {
                            isMove = true;
                            n = i;
                            dx = pos.x - f[i].getPosition().x;
                            dy = pos.y - f[i].getPosition().y;
                            oldPos = f[i].getPosition();
                        }
                    }
            if (e.type == Event::MouseButtonReleased)
                if (e.key.code == Mouse::Left)
                    {
                        isMove = false;
                        Vector2f p = f[n].getPosition();// + Vector2f(defSize, defSize);
                        Vector2f newPos = Vector2f( defSize * int(p.x/defSize) + 25, defSize * int(p.y/defSize) + 25);
                        str = toChessNote(oldPos) + toChessNote(newPos);
                        std::cout << str << std::endl;
                        f[n].setPosition(newPos);
                    }
        }
        
        if (isMove)
        {
            f[n].setPosition(pos.x - dx, pos.y - dy);
	    }

        window.clear();
		window.draw(sBoard);
	    for(int i = 0; i < 32; i++)
        {
            window.draw(f[i]);
        }
        
        window.display();
	}

	return 0;

}
