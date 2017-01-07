#ifndef FAMALE_H
#define FAMALE_H

#include "Criteria.h"

class Famale:public Criteria{
public:
    virtual list<Person> *meetCriteria(list<Person>);
};

#endif
