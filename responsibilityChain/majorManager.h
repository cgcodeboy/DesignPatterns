#ifndef MAJOR_MANAGER_H
#define MAJOR_MANAGER_H

#include "manager.h"

class MajorManager:public Manager{
public:
    MajorManager(string name);
    virtual void handleRequest(Request *request);
};


#endif
