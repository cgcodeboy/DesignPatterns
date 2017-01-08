#ifndef FACE_H
#define FACE_H

#include <iostream>
#include <string>

#include "shapeBase.h"
#include "circle.h"
#include "rectangle.h"
#include "square.h"

using namespace std;

class Facer{
private:
    Circle *_circle;
    Rectangle *_rectangle;
    Square *_square;
public:
    Facer();
    void drawCircle();
    void drawRectangle();
    void drawSquare();
};

#endif
