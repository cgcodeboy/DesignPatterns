#ifndef FACTORY_PRODUCER_H
#define FACTORY_PRODUCER_H

#include "abstractFactory.h"
#include "colorfactory.h"
#include "shapefactory.h"

class FactoryProducer{
public:
	AbstractFactory* getFactory(string type);
};

#endif
