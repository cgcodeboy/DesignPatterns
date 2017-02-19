#ifndef REAL_CUSTOMER_H
#define REAL_CUSTOMER_H

#include "Customer.h"

class RealCustomer:public Customer{
public:
    RealCustomer(string name)
    {
        this->_name = name;
    }

    virtual void buyFood()
    {
        cout<<this->_name<<" is buy food"<<endl;
    }

    virtual bool isNull()
    {
        return false;
    }
};

#endif
