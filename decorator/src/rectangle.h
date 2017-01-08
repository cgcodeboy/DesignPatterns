#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string>

#include "shapeBase.h"

using namespace std;

class Rectangle:public ShapeBase{
public:
    virtual void draw()
    {
        cout<<"draw a rectangle!"<<endl;
    }
};

#endif
