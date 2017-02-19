#ifndef CUSTOMER_FACTORY_H
#define CUSTOMER_FACTORY_H

#include "RealCustomer.h"
#include "NullCustomer.h"

class CustomerFactory{
private:
    string nameDataBase[3];

public:
    CustomerFactory();
    Customer *getCustomerByName(string name);
};

#endif
