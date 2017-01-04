#ifndef BUILDERB_H
#define BUILDERB_H

#include "product.h"
#include "abstractBuilder.h"

class BuilderB:public AbstractBuilder{
public:
    BuilderB();
    virtual void buildComponentA();
    virtual void buildComponentB();
    virtual void buildComponentC();
    virtual Product* getProduct();

private:
    Product *b_product;
};

#endif
