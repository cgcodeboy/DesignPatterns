#include "ObserverA.h"

void ObserverA::update()
{
    cout<<"A类员工得到指令:"<<notifier->getAction()<<"开始执行"<<endl;
}
