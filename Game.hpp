#ifndef GAME_HPP
#define GAME_HPP

#include "ObjectManager.hpp"

class Game : public ObjectManager{
public:
    static const unsigned int NUM_BUBBLE;
    static const unsigned int NUM_PLAYER;
    static const unsigned int NUM_BULLET;
    unsigned int BubbleCount();
    Game(sf::RenderWindow &scr);
};



#endif
