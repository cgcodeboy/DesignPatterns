#include "src/abstractBuilder.h"
#include "src/director.h"
#include "src/builderA.h"
#include "src/builderB.h"

int main()
{
    Director *director = new Director;
    BuilderA *builder_A = new BuilderA;
    BuilderB *builder_B = new BuilderB;

    director->chooseBuildMode(builder_A);
    Product *p1 = builder_A->getProduct();
    p1->showComponent();

    director->chooseBuildMode(builder_B);
    Product *p2 = builder_B->getProduct();
    p2->showComponent();

    return 0;
}

