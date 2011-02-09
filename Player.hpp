#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Object.hpp"

class Player : public Object
{
protected:
	int _lifes;
public:
	Player();
	virtual void Step();

	int GetLifes();
};

#endif
