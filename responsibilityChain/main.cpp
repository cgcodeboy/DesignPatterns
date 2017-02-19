#include "request.h"
#include "majorManager.h"
#include "commonManager.h"

int main()
{
    MajorManager *manager_ZhangFu = new MajorManager("ZhangFu");
    manager_ZhangFu->setLevel(10);
    manager_ZhangFu->setSuper(NULL);

    CommonManager *manager_LiFang = new CommonManager("LiFang");
    manager_LiFang->setLevel(5);
    manager_LiFang->setSuper(manager_ZhangFu);

    Request *request_level3 = new Request("start a group meeting!",3);
    manager_LiFang->handleRequest(request_level3);
    Request *request_level7 = new Request("start a group meeting!",7);
    manager_LiFang->handleRequest(request_level7);

    return 0;
}
