#include "src/computerVisitor.h"
#include "src/computer.h"

int main()
{
//    ComputerVisitor *visitor = new ComputerVisitor;
    Computer *computer = new Computer;
    computer->accept(new ComputerVisitor);
    return 0;
}
