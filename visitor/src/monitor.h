#ifndef MONITOR_H
#define MONITOR_H

#include "computerPart.h"

class Monitor:public ComputerPart{
public:
    virtual void accept(ComputerVisitor *visitor);
};

#endif
