#include "circleFactory.h"

int main()
{
    CircleFactory *factory = new CircleFactory;
    Circle *redCircle = factory->getCircle("red");
    redCircle->setRadius(10);
    redCircle->setX(5);
    redCircle->setY(4);
    redCircle->draw();

    Circle *greenCircle = factory->getCircle("green");
    greenCircle->setRadius(4);
    greenCircle->setX(1);
    greenCircle->setY(6);
    greenCircle->draw();

    return 0;
}
