#include "director.h"

void Director::chooseBuildMode(AbstractBuilder *builder)
{
    builder->buildComponentA();
    builder->buildComponentB();
    builder->buildComponentC();
}
