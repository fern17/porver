#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML/Window.hpp>
#include "Object.hpp"
#include "Game.hpp"


class Player : public Object
{
protected:
	int _lifes;
	const sf::Input & _input;
	double _speedx;

public:
	Player(const sf::Input& in);
	~Player();
	virtual void Step();


	int GetLifes();
};

#endif
