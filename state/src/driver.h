#ifndef DRIVER_H
#define DRIVER_H

#include <iostream>
#include "license.h"

using namespace std;

class Driver{
public:
    Driver();
    void setCurrentLicense(License *license);
    void drive();

private:
    License *_current;
};

#endif
