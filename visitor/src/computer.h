#ifndef COMPUTER_H
#define COMPUTER_H

#include "computerPart.h"
#include "mouse.h"
#include "keyboard.h"
#include "monitor.h"

class Computer:public ComputerPart{
private:
    Mouse *_mouse;
    Monitor *_monitor;
    Keyboard *_keyboard;
public:
    Computer();
    virtual void accept(ComputerVisitor *visitor);
};

#endif
