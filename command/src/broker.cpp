#include "broker.h"

Broker::Broker()
{
    this->_orderList = new list<Order*>;
}

void Broker::addOrder(Order *order)
{
    this->_orderList->push_back(order);
}

void Broker::exeuteOrder()
{
    list<Order*>::iterator it= this->_orderList->begin();
    for(it;it!=this->_orderList->end();++it)
    {
        Order *order = *it;
        order->execute();
    }
    this->_orderList->clear();
}
