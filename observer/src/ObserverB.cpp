#include "ObserverB.h"

void ObserverB::update()
{
    cout<<"B类员工得到指令:"<<notifier->getAction()<<"开始执行"<<endl;
}
