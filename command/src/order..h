#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <string>

using namespace std;

class Order{
public:
    virtual void execute() = 0;
};

#endif
