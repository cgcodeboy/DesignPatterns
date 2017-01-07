#ifndef MARRIED_H
#define MARRIED_H

#include "Criteria.h"

class Married:public Criteria{
public:
    virtual list<Person> *meetCriteria(list<Person>);
};

#endif
