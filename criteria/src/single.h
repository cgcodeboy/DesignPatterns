#ifndef SINGLE_H
#define SINGLE_H

#include "Criteria.h"

class Single:public Criteria{
public:
    virtual list<Person> *meetCriteria(list<Person>);
};

#endif
