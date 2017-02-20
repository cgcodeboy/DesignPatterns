#ifndef CRICKET_H
#define CRICKET_H

#include "game.h"

class Cricket:public Game{
public:
    virtual void initGame();
    virtual void startGame();
    virtual void stopGame();
};

#endif
