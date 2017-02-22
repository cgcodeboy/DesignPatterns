#ifndef MEMENTO_H
#define MEMENTO_H

#include <iostream>
#include <string>

using namespace std;

class Memento{
private:
    string _state;
public:
    Memento(string state)
    {
        this->_state = state;
    }

    string getState()
    {
        return this->_state;
    }
};

#endif
