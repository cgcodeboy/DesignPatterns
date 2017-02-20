#include "src/addStrategy.h"
#include "src/multiStrategy.h"
#include "src/substractStrategy.h"
#include "src/context.h"


int main()
{
    AddStrategy *add = new AddStrategy();
    SubstractStrategy *sub = new SubstractStrategy();
    MultiStrategy *multi = new MultiStrategy();

    Context *context = new Context();
    context->setStrategy(add);
    context->executeStrategy(3,4);

    context->setStrategy(sub);
    context->executeStrategy(5,2);

    context->setStrategy(multi);
    context->executeStrategy(3,7);

    return 0;
}
