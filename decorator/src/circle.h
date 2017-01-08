#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <string>

#include "shapeBase.h"

using namespace std;

class Circle:public ShapeBase{
public:
    virtual void draw()
    {
        cout<<"draw a circle!"<<endl;
    }
};

#endif
