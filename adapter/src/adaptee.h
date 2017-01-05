#ifndef ADAPTEE_H
#define ADAPTEE_H

#include <iostream>
#include <string>

using namespace std;

class Adaptee{
public:
    virtual void complexRequest()
    {
        cout<<"complex request!"<<endl;
    }
};

#endif
