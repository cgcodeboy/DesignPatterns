#ifndef MEMENTO_TAKER_H
#define MEMENTO_TAKER_H

#include "memento.h"
#include <list>

class MementoTaker{
private:
    list<Memento*> *_mementoList;
public:
    MementoTaker();
    void addMemento(Memento *mementor);
    Memento *getMemento(int index);
};


#endif
