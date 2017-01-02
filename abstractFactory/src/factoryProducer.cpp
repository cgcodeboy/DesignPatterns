#include "factoryProducer.h"

AbstractFactory* FactoryProducer::getFactory(string type)
{
	if(type == "colorFactory")
	{
		return new ColorFactory();
	}
	else if(type == "shapeFactory")
	{
		return new ShapeFactory();
	}
	return NULL;
}