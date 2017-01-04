#ifndef BUILDERA_H
#define BUILDERA_H

#include "product.h"
#include "abstractBuilder.h"

class BuilderA:public AbstractBuilder{
public:
    BuilderA();
    virtual void buildComponentA();
    virtual void buildComponentB();
    virtual void buildComponentC();
    virtual Product* getProduct();

private:
    Product *a_product;
};

#endif
