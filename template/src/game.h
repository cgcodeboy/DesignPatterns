#ifndef GAME_H
#define GAME_H

#include <iostream>

using namespace std;

class Game{
public:
    virtual void initGame() = 0;
    virtual void startGame() = 0;
    virtual void stopGame() = 0;
    void play()
    {
        initGame();
        startGame();
        stopGame();
    }
};

#endif
