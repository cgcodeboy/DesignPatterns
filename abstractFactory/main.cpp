#include "src/factoryProducer.h"

int main()
{
    FactoryProducer *producer = new FactoryProducer();
    AbstractFactory *shapeFac = producer->getFactory("shapeFactory");
    Shape *rec = shapeFac->getShape("rectangle");
    rec->draw();

    Shape *cir = shapeFac->getShape("circle");
    cir->draw();

    AbstractFactory *colorFac = producer->getFactory("colorFactory");
    Color *blue = colorFac->getColor("blue");
    blue->fill();

    Color *green = colorFac->getColor("green");
    green->fill();
    return 0;
}
