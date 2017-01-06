#include "src/PhoneA.h"
#include "src/PhoneB.h"
#include "src/SimSoftware.h"
#include "src/GameSoftware.h"


int main()
{
    PhoneA *phone1 = new PhoneA;
    phone1->setSoftware(new GameSoftware());
    phone1->run();

    PhoneB *phone2 = new PhoneB;
    phone2->setSoftware(new SimSoftware());
    phone2->run();
    return 0;
}
