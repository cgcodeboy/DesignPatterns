#ifndef PROTOTYPEA_H
#define PROTOTYPEA_H

#include "AbstarctPrototype.h"

class PrototypeA:public AbstractPrototype{
public:
    PrototypeA(string name = ""):AbstractPrototype(name){}

    virtual AbstractPrototype * clone();
};

#endif
