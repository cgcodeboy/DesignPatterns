#include "Famale.h"

list<Person>* Famale::meetCriteria(list<Person> persons)
{
    list<Person> *personList = new list<Person>;
    list<Person>::iterator it = persons.begin();
    while(it!=persons.end())
    {
        if(it->getSex() == "famale")
        {
            personList->push_back(*it);
        }
        it++;
    }
    return personList;
}
