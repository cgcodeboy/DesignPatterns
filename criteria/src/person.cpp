#include "person.h"

Person::Person(string name,string sex,string status)
{
    this->_name = name;
    this->_sex = sex;
    this->_status = status;
}

string Person::getName()
{
    return this->_name;
}

string Person::getSex()
{
    return this->_sex;
}

string Person::getStatus()
{
    return this->_status;
}
