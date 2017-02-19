#ifndef REQUEST_H
#define REQUEST_H

#include <iostream>
#include <string>

using namespace std;

class Request{
private:
    string _requestInfo;
    int _level;

public:
    Request(string requestInfo,int level)
    {
        this->_requestInfo = requestInfo;
        this->_level = level;
    }

    string getRequest()
    {
        return this->_requestInfo;
    }

    int getLevel()
    {
        return this->_level;
    }
};


#endif
