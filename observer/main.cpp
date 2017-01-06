#include "src/ObserverBase.h"
#include "src/ObserverA.h"
#include "src/ObserverB.h"
#include "src/Notifier.h"


int main()
{
    Notifier *notifier = new Notifier;
    ObserverA *observer_1 = new ObserverA("小红",notifier);
    ObserverA *observer_2 = new ObserverA("小芳",notifier);
    ObserverB *observer_3 = new ObserverB("小东",notifier);
    ObserverB *observer_4 = new ObserverB("小明",notifier);

    notifier->addObsevers(observer_1);
    notifier->addObsevers(observer_2);
    notifier->addObsevers(observer_3);
    notifier->addObsevers(observer_4);

    notifier->setAction("马上开会！");
    notifier->notify();

    return 0;
}
