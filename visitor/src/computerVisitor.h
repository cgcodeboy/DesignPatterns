#ifndef COMPUTER_VISITOR_H
#define COMPUTER_VISITOR_H

#include <iostream>
#include <string>

#include "mouse.h"
#include "monitor.h"
#include "keyboard.h"
#include "computer.h"

using namespace std;

class ComputerVisitor{
public:
    void visit(Mouse *mouse);
    void visit(Monitor *monitor);
    void visit(Keyboard *keyboard);
    void visit(Computer *computer);
};


#endif
