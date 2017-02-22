#include "originator.h"

Originator::Originator()
{

}

void Originator::setState(std::string state)
{
    this->_state = state;
}

Memento *Originator::saveToMemento()
{
    cout<<"save state:"<<this->_state<<endl;
    return new Memento(this->_state);
}

void Originator::getFromMemento(Memento *memento)
{
    cout<<"get state:"<<memento->getState()<<endl;
    this->_state = memento->getState();
}
