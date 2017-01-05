#include "src/adapter.h"

int main()
{
    Adapter *adapter = new Adapter;
    adapter->simpleRequest();
    adapter->complexRequest();
    adapter->request();
    return 0;
}
