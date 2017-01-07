#include "male.h"

list<Person>* Male::meetCriteria(list<Person> persons)
{
    list<Person> *personList = new list<Person>;
    list<Person>::iterator it = persons.begin();
    while(it!=persons.end())
    {
        if(it->getSex() == "male")
        {
            personList->push_back(*it);
        }
        it++;
    }
    return personList;
}
