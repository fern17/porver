#ifndef BULLET_HPP
#define BULLET_HPP

#include "Object.hpp"

class Bullet : public Object{
	double _speedy;
	Game & _gameManager;
public:
	Bullet(double x, double y, Game &gm);

	virtual void Step();

};

#endif
