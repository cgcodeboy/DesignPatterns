#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person{
private:
    string _name;
    string _sex;
    string _status;
public:
    Person(string name,string sex,string status);
    string getName();
    string getSex();
    string getStatus();
};

#endif
