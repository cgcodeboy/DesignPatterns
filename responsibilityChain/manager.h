#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include <string>
#include "request.h"

using namespace std;

class Manager{
private:
    string _name;
    Manager *_manager;
    int _level;
public:
    Manager(string name)
    {
        this->_name = name;
    }

    void setSuper(Manager *manager)
    {
        this->_manager = manager;
    }

    void setLevel(int level)
    {
        this->_level = level;
    }

    int getLevel()
    {
        return this->_level;
    }

    string getName()
    {
        return this->_name;
    }

    Manager *getSuper()
    {
        return this->_manager;
    }

    virtual void handleRequest(Request *request) = 0;
};

#endif
