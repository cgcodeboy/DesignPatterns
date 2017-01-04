#include "builderB.h"

BuilderB::BuilderB()
{
    b_product = new Product;
}

void BuilderB::buildComponentA()
{
    b_product->addComponent("A_Component_Level_2");
}

void BuilderB::buildComponentB()
{
    b_product->addComponent("B_Component_Level_2");
}

void BuilderB::buildComponentC()
{
    b_product->addComponent("C_Component_Level_2");
}

Product* BuilderB::getProduct()
{
    return this->b_product;
}
