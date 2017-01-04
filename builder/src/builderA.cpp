#include "builderA.h"

BuilderA::BuilderA()
{
    a_product = new Product;
}

void BuilderA::buildComponentA()
{
    a_product->addComponent("A_Component_Level_1");
}

void BuilderA::buildComponentB()
{
    a_product->addComponent("B_Component_Level_1");
}

void BuilderA::buildComponentC()
{
    a_product->addComponent("C_Component_Level_1");
}

Product* BuilderA::getProduct()
{
    return this->a_product;
}
