#include "pen.h"
#include <SFML/Graphics.hpp>

int main()
{
    Pen pen;
    sf::RenderWindow window(sf::VideoMode(800, 450), "Ritprogram");

    while (window.isOpen()){

        sf::Event event;

        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
                break;
            }
            sf::Vector2i mousePos = sf::Mouse::getPosition(window);
            pen.x = mousePos.x;
            pen.y = mousePos.y;
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q)){
            pen.shouldClear = true;
        }

        if (pen.shouldClear == true){
            window.clear();
            pen.shouldClear = false;
        }

        window.draw(pen.drawPen());
        window.display();
    }
}