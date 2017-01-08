#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include <string>

#include "shapeBase.h"

using namespace std;

class Square:public ShapeBase{
public:
    virtual void draw()
    {
        cout<<"draw a square!"<<endl;
    }
};

#endif
