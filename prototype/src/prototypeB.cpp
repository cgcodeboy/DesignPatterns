#include "prototypeB.h"

AbstractPrototype* PrototypeB::clone()
{
    PrototypeB *p = new PrototypeB;
    *p = *this;
    return p;
}
