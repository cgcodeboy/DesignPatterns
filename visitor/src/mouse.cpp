#include "mouse.h"
#include "computerVisitor.h"

void Mouse::accept(ComputerVisitor *visitor)
{
    visitor->visit(this);
}
