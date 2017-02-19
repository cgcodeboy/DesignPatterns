#include "C_license.h"

C_License::C_License(Driver *driver):_driver(driver),_level("C")
{

}

void C_License::licenseLevelIncrease()
{
   _sleep(1000);
   _driver->setCurrentLicense(new B_License(_driver));
   _driver->drive();
}

void C_License::printLicenseLevel()
{
    cout<<"get licenseLevel:"<<this->_level<<"   drive..."<<endl;
}
