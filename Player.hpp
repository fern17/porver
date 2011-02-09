#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Object.hpp"

class Player : public Object
{
protected:
	int _lifes;
public:
	Player();

	int GetLifes();
};

#endif
