#include "customerFactory.h"


CustomerFactory::CustomerFactory()
{
    nameDataBase[0] = "SunJun";
    nameDataBase[1] = "LiFang";
    nameDataBase[2] = "LiuHua";
}

Customer* CustomerFactory::getCustomerByName(string name)
{
    for(int i = 0;i<3;i++)
    {
        if(!name.compare(nameDataBase[i]))
        {
            return new RealCustomer(name);
        }
    }
    return new NullCustomer();
}
