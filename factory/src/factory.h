#ifndef FACTORY_H
#define FACTORY_H

#include "shape.h"
#include "circle.h"
#include "rectangle.h"

class factory{
public:
	factory(){};
	shape* getShape(string str);
};

#endif

