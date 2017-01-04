#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "product.h"
#include "abstractBuilder.h"

class Director{
public:
    void chooseBuildMode(AbstractBuilder *builder);
};

#endif
