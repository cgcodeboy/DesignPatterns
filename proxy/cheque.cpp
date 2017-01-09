#include "cheque.h"

Cheque::Cheque(int num)
{
    this->_num = num;
    this->money = NULL;
}

void Cheque::useMoney()
{
    if(money == NULL)
    {
        money = new Money(this->_num);
        money->useMoney();
    }
}
