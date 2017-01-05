#ifndef ABSTRACT_PROTOTYPE_H
#define ABSTRACT_PROTOTYPE_H

#include <iostream>
#include <string>

using namespace std;

class AbstractPrototype{
private:
    string prototype_name;
public:
    AbstractPrototype(string name = ""){
        this->prototype_name = name;
    }

    void showName()
    {
        cout<<this->prototype_name<<endl;
    }

    virtual AbstractPrototype * clone() = 0;
};

#endif
