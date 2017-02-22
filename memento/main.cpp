#include "originator.h"
#include "mementoTaker.h"

int main()
{
    MementoTaker *taker = new MementoTaker;
    Originator *originator = new Originator;
    originator->setState("state #1");
    taker->addMemento(originator->saveToMemento());
    originator->setState("state #2");
    taker->addMemento(originator->saveToMemento());

    originator->getFromMemento(taker->getMemento(0));
    originator->getFromMemento(taker->getMemento(1));

    return 0;
}
