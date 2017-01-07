#include "married.h"

list<Person>* Married::meetCriteria(list<Person> persons)
{
    list<Person> *personList = new list<Person>;
    list<Person>::iterator it = persons.begin();
    while(it!=persons.end())
    {
        if(it->getStatus() == "married")
        {
            personList->push_back(*it);
        }
        it++;
    }
    return personList;
}
