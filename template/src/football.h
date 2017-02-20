#ifndef FOOTBALL_H
#define FOOTBALL_H

#include "game.h"

class Football:public Game{
public:
    virtual void initGame();
    virtual void startGame();
    virtual void stopGame();
};

#endif
