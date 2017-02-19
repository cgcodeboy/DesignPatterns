#include "driver.h"

Driver::Driver()
{

}

void Driver::setCurrentLicense(License *license)
{
    this->_current = license;
}

void Driver::drive()
{
    _current->printLicenseLevel();
    _current->licenseLevelIncrease();
}
