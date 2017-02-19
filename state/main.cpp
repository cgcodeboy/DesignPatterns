#include "src/A_license.h"
#include "src/B_license.h"
#include "src/C_license.h"
#include "src/driver.h"

int main()
{
    Driver *driver = new Driver;
    C_License *c_license = new C_License(driver);

    driver->setCurrentLicense(c_license);
    driver->drive();

    return 0;
}
