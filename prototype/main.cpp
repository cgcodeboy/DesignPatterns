#include "src/prototypeA.h"
#include "src/prototypeB.h"

int main()
{
    PrototypeA *proA = new PrototypeA("prototypeA");
    PrototypeB *proB = (PrototypeB*)proA->clone();

    proA->showName();
    proB->showName();

    return 0;
}
