#include "src/broker.h"

int main()
{
    Stock *nickStock = new Stock("nick",50);
    Stock *adiStock = new Stock("adi",20);
    Stock *kapaStock = new Stock("kapa",60);

    BuyStockOrder *buyNickOrder = new BuyStockOrder(nickStock);
    BuyStockOrder *buyAdiOrder = new BuyStockOrder(adiStock);
    BuyStockOrder *buyKapaOrder = new BuyStockOrder(kapaStock);

    SellStockOrder *sellNickOrder = new SellStockOrder(nickStock);
    SellStockOrder *sellAdiOrder = new SellStockOrder(adiStock);
    SellStockOrder *sellKapaOrder = new SellStockOrder(kapaStock);

    Broker *broker = new Broker;
    broker->addOrder(buyAdiOrder);
    broker->addOrder(buyKapaOrder);
    broker->addOrder(buyNickOrder);
    broker->addOrder(sellAdiOrder);
    broker->addOrder(sellKapaOrder);
    broker->addOrder(sellNickOrder);

    broker->exeuteOrder();
    return 0;
}
