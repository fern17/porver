#ifndef GAME_HPP
#define GAME__HPP

#include "ObjectManager.hpp"

class Game : public ObjectManager{
    static unsigned int NUM_BUBBLE;

    public:
    unsigned int BubbleCount();
};
unsigned int Game::NUM_BUBBLE = 1;


#endif
