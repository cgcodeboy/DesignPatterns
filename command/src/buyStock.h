#ifndef BUY_STOCK_H
#define BUY_STOCK_H

#include "order..h"
#include "stock.h"

class BuyStockOrder:public Order{
private:
    Stock *_stock;
public:
    BuyStockOrder(Stock *stock)
    {
        this->_stock = stock;
    }

    virtual void execute()
    {
        this->_stock->buy();
    }
};

#endif
