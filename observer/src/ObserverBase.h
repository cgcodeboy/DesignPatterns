#ifndef OBSERVER_BASE_H
#define OBSERVER_BASE_H

#include <iostream>
#include <string>
#include "Notifier.h"

using namespace std;

class ObserverBase{
protected:
    Notifier *notifier;
    string name;
public:
    ObserverBase(string _name,Notifier *_notifier)
    {
        this->name = _name;
        this->notifier = _notifier;
    }

    virtual void update() = 0;
};

#endif
