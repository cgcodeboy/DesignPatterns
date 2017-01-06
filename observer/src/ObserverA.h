#ifndef OBSERVERA_H
#define OBSERVERA_H

#include "ObserverBase.h"

class ObserverA:public ObserverBase{
public:
    ObserverA(string _name,Notifier *_notifier):ObserverBase(_name,_notifier)
    {
        //
    }

    virtual void update();
};

#endif
