#ifndef CIRCLE_FACTORY_H
#define CIRCLE_FACTORY_H

#include "circle.h"
#include <map>

class CircleFactory{
private:
    map<string,Circle*> circleMap;
public:
    Circle* getCircle(string color);
};

#endif
