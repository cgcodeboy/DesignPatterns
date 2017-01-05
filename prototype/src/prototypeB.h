#ifndef PROTOTYPEB_H
#define PROTOTYPEB_H

#include "AbstarctPrototype.h"

class PrototypeB:public AbstractPrototype{
public:
    PrototypeB(string name = ""):AbstractPrototype(name){}

    virtual AbstractPrototype * clone();
};

#endif
