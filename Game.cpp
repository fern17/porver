#include "Game.hpp"
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