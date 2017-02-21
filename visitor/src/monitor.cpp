#include "monitor.h"
#include "computerVisitor.h"

void Monitor::accept(ComputerVisitor *visitor)
{
    visitor->visit(this);
}
