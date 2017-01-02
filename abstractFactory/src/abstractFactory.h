#ifndef ABSTRACT_FACTORY_H
#define ABSTRACT_FACTORY_H

#include <string>
#include "color.h"
#include "shape.h"

class AbstractFactory{
public:
	virtual Color *getColor(string type)
	{
		//
	}
	virtual Shape *getShape(string type)
	{
		//
	}
};

#endif