#ifndef STOCK_H
#define STOCK_H

#include <iostream>
#include <string>

using namespace std;

class Stock{
public:
    Stock(string name,int num):_name(name),_num(num){}
    void buy()
    {
        cout<<"Buy "<<this->_num<<" pair of "<<this->_name<<" stock!"<<endl;
    }

    void sell()
    {
        cout<<"Sell "<<this->_num<<" pair of "<<this->_name<<" stock!"<<endl;
    }

private:
    string _name;
    int _num;
};


#endif
