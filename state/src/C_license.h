#ifndef C_LICENSE_H
#define C_LICENSE_H

#include "driver.h"
#include "license.h"
#include "B_license.h"

class C_License:public License{
public:
    C_License(Driver *driver);
    virtual void licenseLevelIncrease();
    virtual void printLicenseLevel();
private:
    string _level;
    Driver *_driver;
};

#endif
