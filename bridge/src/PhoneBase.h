#ifndef PHONE_BASE_H
#define PHONE_BASE_H

#include <iostream>
#include <string>
#include "SoftwareBase.h"

using namespace std;

class PhoneBase{
protected:
    SoftwareBase *software;
public:
    virtual void setSoftware(SoftwareBase *_software)
    {
        this->software = _software;
    }

    virtual void run() = 0;
};

#endif
