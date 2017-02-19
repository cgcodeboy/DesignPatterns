#include "A_license.h"

A_License::A_License(Driver *driver):_driver(driver),_level("A")
{

}

void A_License::licenseLevelIncrease()
{

}

void A_License::printLicenseLevel()
{
    cout<<"get licenseLevel:"<<this->_level<<"   drive..."<<endl;
}
