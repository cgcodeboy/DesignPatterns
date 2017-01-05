#ifndef TARGET_H
#define TARGET_H

#include <iostream>
#include <string>

using namespace std;

class Target{
public:
    virtual void simpleRequest()
    {
        cout<<"simple request!"<<endl;
    }
};

#endif
