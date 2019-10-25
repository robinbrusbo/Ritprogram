#ifndef PEN_H
#define PEN_H

#include <SFML/Graphics.hpp>

class Pen
{
    public:
        sf::CircleShape drawPen();
        void changeSize();
        void changeColor(char color);
        void clear();
        void erase();

        bool shouldClear = true;
        float x = 200;
        float y = 200;

    private:
        float radius = 10;
        sf::Color color = sf::Color::Green;
        sf::CircleShape dot;
        bool shouldErase = false; 
};

#endif