#include "redShapeDecorator.h"

RedShapeDecorator::RedShapeDecorator(ShapeBase *shapeBase):ShapeDecorator(shapeBase)
{
    //
}

void RedShapeDecorator::draw()
{
    this->_shapeBase->draw();
    this->setBorder();
}

void RedShapeDecorator::setBorder()
{
    cout<<"draw a border!"<<endl;
}
