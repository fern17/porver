#ifndef GAME_HPP
#define GAME_HPP

#include "ObjectManager.hpp"
#include <string>
#include <map>
class Game : public ObjectManager{
	std::map<std::string,sf::Image *> _imgResourcer;
public:
	sf::Image * operator[](const std::string str);
    static const unsigned int NUM_BUBBLE;
    static const unsigned int NUM_PLAYER;
    static const unsigned int NUM_BULLET;
    unsigned int BubbleCount();
    Game(sf::RenderWindow &scr);
};



#endif
