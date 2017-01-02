/*
这段代码是color的工厂类
*/
#ifndef COLOR_FACTORY_H
#define COLOR_FACTORY_H

#include "color.h"
#include "shape.h"
#include "blue.h"
#include "green.h"
#include "abstractFactory.h"

class ColorFactory:public AbstractFactory
{
public:
	virtual Color* getColor(string type)
	{
		if(type == "blue")
		{
			return new Blue();
		}
		else if(type == "green")
		{
			return new Green();
		}
		return NULL;
	}
	virtual Shape* getShape(string type)
	{
		return NULL;
	}
};

#endif