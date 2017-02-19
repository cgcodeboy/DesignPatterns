#ifndef NULL_CUSTOMER_H
#define NULL_CUSTOMER_H

#include "Customer.h"

class NullCustomer:public Customer{
public:
    NullCustomer()
    {

    }

    virtual void buyFood()
    {
        cout<<"it's a not a customer!"<<endl;
    }

    virtual bool isNull()
    {
        return true;
    }
};

#endif
