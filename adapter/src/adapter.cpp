#include "adapter.h"

Adapter::Adapter()
{
    adaptee = new Adaptee;
    target = new Target;
}

Adapter::~Adapter()
{
    delete adaptee;
    delete target;
}

void Adapter::simpleRequest()
{
    target->simpleRequest();
    adaptee->complexRequest();
}

void Adapter::complexRequest()
{
    adaptee->complexRequest();
    target->simpleRequest();

}

void Adapter::request()
{
    cout<<"simple and complex request!"<<endl;
}
