#ifndef ADD_STRATEGY_H
#define ADD_STRATEGY_H

#include "strategy.h"

class AddStrategy:public Strategy{
    virtual int doOperation(int num1, int num2);
};


#endif
