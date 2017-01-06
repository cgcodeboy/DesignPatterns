#ifndef NOTIFIER_H
#define NOTIFIER_H

#include <iostream>
#include <string>
#include <vector>

class ObserverBase;

using namespace std;

class Notifier{
private:
    string action;
    vector<ObserverBase *> observers;
public:
    void addObsevers(ObserverBase * _observer);
    void notify();
    void setAction(string _action);
    string getAction();
};

#endif
