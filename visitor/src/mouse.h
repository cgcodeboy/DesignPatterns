#ifndef MOUSE_H
#define MOUSE_H

#include "computerPart.h"
//#include "computerVisitor.h"

class Mouse:public ComputerPart{
public:
    virtual void accept(ComputerVisitor *visitor);
};

#endif
