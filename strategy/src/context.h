#ifndef CONTEXT_H
#define CONTEXT_H

#include <iostream>
#include "strategy.h"

using namespace std;

class Context{
private:
    Strategy *_strategy;
public:
    Context();
    void setStrategy(Strategy *strategy);
    void executeStrategy(int num1, int num2);
};

#endif
