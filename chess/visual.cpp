#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(453, 453), "The Chess!", sf::Style::Close | sf::Style::Titlebar);
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    
    sf::Texture imageSource;    //loads image and set as Sprite
    sf::Sprite imageSpirte;
    if(!imageSource.loadFromFile("/images/board0.png")
    {
        return EXIT_FAILURE;
    }
    imageSprite.setTexture(imageSource);
    

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        window.draw(imageSprite);
        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
