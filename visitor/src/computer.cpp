#include "computer.h"
#include "computerVisitor.h"

Computer::Computer()
{
    this->_mouse = new Mouse;
    this->_monitor = new Monitor;
    this->_keyboard = new Keyboard;
}

void Computer::accept(ComputerVisitor *visitor)
{
    this->_keyboard->accept(visitor);
    this->_monitor->accept(visitor);
    this->_mouse->accept(visitor);
    visitor->visit(this);
}
