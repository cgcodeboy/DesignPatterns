#include "keyboard.h"
#include "computerVisitor.h"

void Keyboard::accept(ComputerVisitor *visitor)
{
    visitor->visit(this);
}
