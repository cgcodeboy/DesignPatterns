#include "prototypeA.h"

AbstractPrototype* PrototypeA::clone()
{
    PrototypeA *p = new PrototypeA;
    *p = *this;
    return p;
}
