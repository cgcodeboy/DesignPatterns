#ifndef RED_SHAPE_DECORATOR_H
#define RED_SHAPE_DECORATOR_H

#include "shapeDecorator.h"

class RedShapeDecorator:public ShapeDecorator{
public:
    RedShapeDecorator(ShapeBase *shapeBase);
    virtual void draw();
    void setBorder();
};

#endif
