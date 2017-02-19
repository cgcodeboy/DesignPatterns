#include "commonManager.h"

CommonManager::CommonManager(std::string name):Manager(name)
{

}

void CommonManager::handleRequest(Request *request)
{
    if(request->getLevel()<0)
    {
        cout<<"level is error!"<<endl;
        return;
    }
    if(request->getLevel()<this->getLevel())
    {
        cout<<this->getName()<<"handle the request!"<<endl;
        return;
    }
    this->getSuper()->handleRequest(request);
}
