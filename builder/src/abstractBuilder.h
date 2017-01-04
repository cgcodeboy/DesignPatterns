#ifndef ABSTRACT_BUILDER_H
#define ABSTRACT_BUILDER_H

#include <iostream>
#include "product.h"

class AbstractBuilder{
public:
    virtual void buildComponentA() = 0;
    virtual void buildComponentB() = 0;
    virtual void buildComponentC() = 0;
    virtual Product* getProduct() = 0;
};

#endif
