#ifndef SELL_STOCK_H
#define SELL_STOCK_H

#include "stock.h"
#include "order..h"

class SellStockOrder:public Order
{
private:
    Stock *_stock;
public:
    SellStockOrder(Stock *stock)
    {
        this->_stock = stock;
    }

    virtual void execute()
    {
        this->_stock->sell();
    }
};

#endif
