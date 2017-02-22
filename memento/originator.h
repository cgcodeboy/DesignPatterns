#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include "memento.h"

class Originator{
private:
    string _state;
public:
    Originator();
    void setState(string state);
    Memento* saveToMemento();
    void getFromMemento(Memento *memento);
};

#endif
