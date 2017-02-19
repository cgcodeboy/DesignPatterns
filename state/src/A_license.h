#ifndef A_LICENSE_H
#define A_LICENSE_H

#include "driver.h"
#include "license.h"

class A_License:public License{
public:
    A_License(Driver *driver);
    virtual void licenseLevelIncrease();
    virtual void printLicenseLevel();
private:
    string _level;
    Driver *_driver;
};

#endif
