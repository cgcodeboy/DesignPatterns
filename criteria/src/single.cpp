#include "single.h"

list<Person>* Single::meetCriteria(list<Person> persons)
{
    list<Person> *personList = new list<Person>;
    list<Person>::iterator it = persons.begin();
    while(it!=persons.end())
    {
        if(it->getStatus() == "single")
        {
            personList->push_back(*it);
        }
        it++;
    }
    return personList;
}
