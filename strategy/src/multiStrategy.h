#ifndef MULTI_STRATEGY_H
#define MULTI_STRATEGY_H

#include "strategy.h"

class MultiStrategy:public Strategy{
    virtual int doOperation(int num1, int num2);
};


#endif
