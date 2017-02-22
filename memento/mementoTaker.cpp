#include "mementoTaker.h"

MementoTaker::MementoTaker()
{
    this->_mementoList = new list<Memento*>;
}

void MementoTaker::addMemento(Memento *memento)
{
    this->_mementoList->push_back(memento);
}

Memento *MementoTaker::getMemento(int index)
{
    if(index<0||index>this->_mementoList->size()-1)
    {
        cout<<"It's not in this taker!"<<endl;
        return NULL;
    }
    list<Memento*>::iterator it = this->_mementoList->begin();
    for(int i = 0;i!=index;i++,it++);
    return *it;
}
