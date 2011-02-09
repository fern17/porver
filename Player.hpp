#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML/Window.hpp>
#include "Object.hpp"

class Player : public Object
{
protected:
	int _lifes;
	const sf::Input & _input;
public:
	Player(const sf::Input& in);

	int GetLifes();
};

#endif
