#include "facer.h"

Facer::Facer()
{
    this->_square = new Square;
    this->_circle = new Circle;
    this->_rectangle = new Rectangle;
}

void Facer::drawCircle()
{
    this->_circle->draw();
}

void Facer::drawRectangle()
{
    this->_rectangle->draw();
}

void Facer::drawSquare()
{
    this->_square->draw();
}
