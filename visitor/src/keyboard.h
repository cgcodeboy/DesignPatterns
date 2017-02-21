#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "computerPart.h"

class Keyboard:public ComputerPart{
public:
    virtual void accept(ComputerVisitor *visitor);
};

#endif
