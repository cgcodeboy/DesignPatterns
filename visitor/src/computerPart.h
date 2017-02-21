#ifndef COMPUTER_PART_H
#define COMPUTER_PART_H

#include <iostream>

using namespace std;

class ComputerVisitor;

class ComputerPart{
public:
    virtual void accept(ComputerVisitor *visitor) = 0;
};

#endif
