#include "Notifier.h"
#include "ObserverBase.h"

void Notifier::addObsevers(ObserverBase * _observer)
{
    observers.push_back(_observer);
}

void Notifier::notify()
{
    if(observers.size()!=0)
    {
        vector<ObserverBase*>::iterator it = observers.begin();
        while(it!=observers.end())
        {
            (*it)->update();
            it++;
        }
    }
}

void Notifier::setAction(string _action)
{
    this->action = _action;
}

string Notifier::getAction()
{
    return this->action;
}
