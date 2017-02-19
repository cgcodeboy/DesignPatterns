#include "B_license.h"

B_License::B_License(Driver *driver):_driver(driver),_level("B")
{

}

void B_License::licenseLevelIncrease()
{
   _sleep(1000);
   _driver->setCurrentLicense(new A_License(_driver));
   _driver->drive();
}

void B_License::printLicenseLevel()
{
    cout<<"get licenseLevel:"<<this->_level<<"   drive..."<<endl;
}
