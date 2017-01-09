#ifndef MONEY_H
#define MONEY_H

#include <iostream>
#include <string>

using namespace std;

class Money{
private:
    int _num;
public:
    Money(int num)
    {
        this->_num = num;
        this->loadFromBank();
    }

    void useMoney()
    {
        cout<<"use out the money "<<this->_num<<" dollars!"<<endl;
    }

protected:
    void loadFromBank()
    {
        cout<<"load from bank "<<this->_num<<" dollars!"<<endl;
    }
};


#endif
