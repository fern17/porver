#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML/Window.hpp>
#include "Object.hpp"
#include "Game.hpp"
#include "Bullet.hpp"


class Player : public Object
{
protected:
	int _lifes;
	const sf::Input & _input;
	double _speedx;
	Game & _gameManager;

public:
	Player(const sf::Input& in, Game &gm);
	~Player();
	virtual void Step();


	int GetLifes();
};

#endif
