#ifndef SUBSTRACT_STRATEGY_H
#define SUBSTRACT_STRATEGY_H

#include "strategy.h"

class SubstractStrategy:public Strategy{
    virtual int doOperation(int num1, int num2);
};


#endif
