#ifndef SHAPE_DECORATOR_H
#define SHAPE_DECORATOR_H

#include "shapeBase.h"

class ShapeDecorator:public ShapeBase{
protected:
    ShapeBase *_shapeBase;
public:
    ShapeDecorator(ShapeBase *shapeBase)
    {
        this->_shapeBase = shapeBase;
    }

    virtual void draw()
    {
        this->_shapeBase->draw();
    }
};

#endif
