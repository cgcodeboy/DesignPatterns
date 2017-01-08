#include "src/circle.h"
#include "src/rectangle.h"
#include "src/redShapeDecorator.h"
#include "src/shapeDecorator.h"

int main()
{
    ShapeBase *circle = new Circle;
    circle->draw();

    ShapeBase *rec = new Rectangle;
    rec->draw();

    ShapeDecorator *decorator = new ShapeDecorator(new Circle());
    decorator->draw();

    RedShapeDecorator *redDecorator = new RedShapeDecorator(new Rectangle());
    redDecorator->draw();

    return 0;
}
