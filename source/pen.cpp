#include "pen.h"

sf::CircleShape Pen::drawPen(){
    this->dot.setPosition(this->x, this->y);
    this->dot.setRadius(this->radius);
    this->dot.setFillColor(this->color);
    return dot;
}
void Pen::changeSize(){

}
void Pen::changeColor(char color){

}
void Pen::clear(){

}
void Pen::erase(){

}