#ifndef COMMON_MANAGER_H
#define COMMON_MANAGER_H

#include "manager.h"

class CommonManager:public Manager{
public:
    CommonManager(string name);
    virtual void handleRequest(Request *request);
};


#endif
