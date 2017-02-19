#ifndef LICENSE_H
#define LICENSE_H

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class License{
public:
    virtual void licenseLevelIncrease() = 0;
    virtual void printLicenseLevel() = 0;
};

#endif
