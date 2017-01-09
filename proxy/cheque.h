#ifndef CHEQUE_H
#define CHEQUE_H

#include "money.h"

class Cheque{
private:
    int _num;
    Money *money;

public:
    Cheque(int num);

    void useMoney();
};

#endif
