#ifndef B_LICENSE_H
#define B_LICENSE_H

#include "driver.h"
#include "license.h"
#include "A_license.h"

class B_License:public License{
public:
    B_License(Driver *driver);
    virtual void licenseLevelIncrease();
    virtual void printLicenseLevel();
private:
    string _level;
    Driver *_driver;
};

#endif
