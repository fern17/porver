#ifndef GAME_HPP
#define GAME_HPP

#include "ObjectManager.hpp"

class Game : public ObjectManager{
public:
    static const unsigned int NUM_BUBBLE;
    static const unsigned int NUM_PLAYER;
    unsigned int BubbleCount();
    Game(sf::RenderWindow &scr);
};
const unsigned int Game::NUM_PLAYER = 0;
const unsigned int Game::NUM_BUBBLE = 1;



#endif
