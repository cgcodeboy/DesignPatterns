#ifndef SHAPE_FACTORY_H
#define SHAPE_FACTORY_H

#include "shape.h"
#include "color.h"
#include "circle.h"
#include "rectangle.h"

class ShapeFactory:public AbstractFactory
{
public:
	virtual Shape* getShape(string type)
	{
		if(type == "circle")
		{
			return new Circle();
		}
		else if(type == "rectangle")
		{
			return new Rectangle();
		}
		return NULL;
	}
	virtual Color* getColor(string type)
	{
		return NULL;
	}
};


#endif