#ifndef OBSERVERB_H
#define OBSERVERB_H

#include "ObserverBase.h"

class ObserverB:public ObserverBase{
public:
    ObserverB(string _name,Notifier *_notifier):ObserverBase(_name,_notifier)
    {
        //
    }

    virtual void update();
};

#endif
