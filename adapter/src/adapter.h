#ifndef ADAPTER_H
#define ADAPTER_H

#include "target.h"
#include "adaptee.h"

class Adapter:public Adaptee,public Target{
public:
    Adapter();
    ~Adapter();
    void simpleRequest();
    void complexRequest();
    void request();

private:
    Adaptee *adaptee;
    Target *target;
};


#endif

