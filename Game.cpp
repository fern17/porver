#include "Game.hpp"
#include "Object.hpp"

const unsigned int Game::NUM_PLAYER = 0;
const unsigned int Game::NUM_BUBBLE = 1;
const unsigned int Game::NUM_BULLET = 2;

Game::Game(sf::RenderWindow &scr) : ObjectManager(scr){
	_imgResourcer["bubble"] = new sf::Image();
	_imgResourcer["player"] = new sf::Image();
	_imgResourcer["bullet"] = new sf::Image();

	_imgResourcer["bubble"]->LoadFromFile("sprites/bubble.png");
	_imgResourcer["player"]->LoadFromFile("sprites/player.png");
	_imgResourcer["bullet"]->LoadFromFile("sprites/bullet.png");


}

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

sf::Image * Game::operator[](const std::string str){
	if(_imgResourcer.find(str) != _imgResourcer.end())
		return _imgResourcer[str];
	return (new sf::Image());
}
