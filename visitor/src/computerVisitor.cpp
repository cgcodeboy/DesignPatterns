#include "computerVisitor.h"

void ComputerVisitor::visit(Mouse *mouse)
{
    cout<<"Now it's visit mouse!"<<endl;
}

void ComputerVisitor::visit(Monitor *monitor)
{
    cout<<"Now it's visit monitor!"<<endl;
}

void ComputerVisitor::visit(Keyboard *keyboard)
{
    cout<<"Now it's visit keyboard!"<<endl;
}

void ComputerVisitor::visit(Computer *computer)
{
    cout<<"Now it's visit computer!"<<endl;
}
