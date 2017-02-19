#include "src/customerFactory.h"

int main()
{
    CustomerFactory *factory = new CustomerFactory;

    Customer *SunJun = factory->getCustomerByName("SunJun");
    SunJun->buyFood();

    Customer *LiFang = factory->getCustomerByName("LiFang");
    LiFang->buyFood();

    Customer *LiuHua = factory->getCustomerByName("LiuHua");
    LiuHua->buyFood();

    Customer *HuoHuade = factory->getCustomerByName("HuoHuade");
    HuoHuade->buyFood();

    return 0;
}
