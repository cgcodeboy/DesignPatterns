#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>

using namespace std;

class Customer{
protected:
    string _name;

public:
    virtual void buyFood() = 0;
    virtual bool isNull() = 0;
};

#endif
