#include "Game.hpp"
#include "Object.hpp"

const unsigned int Game::NUM_PLAYER = 0;
const unsigned int Game::NUM_BUBBLE = 1;

Game::Game(sf::RenderWindow &scr) : ObjectManager(scr){}

unsigned int Game::BubbleCount(){
    unsigned int count = 0;
    _listIterator = _objList.begin();
    while(_listIterator != _objList.end()){
        if((*_listIterator)->GetType() == NUM_BUBBLE)
            count++;
        _listIterator++;
    }
    return count;

}
