#ifndef MALE_H
#define MALE_H

#include "Criteria.h"

class Male:public Criteria{
public:
    virtual list<Person> *meetCriteria(list<Person>);
};

#endif
