#ifndef BROKER_H
#define BROKER_H

#include <list>

#include "buyStock.h"
#include "sellStock.h"

class Broker{
private:
    list<Order*> *_orderList;
public:
    Broker();

    void addOrder(Order *order);

    void exeuteOrder();
};


#endif
