#include "Bullet.hpp"


Bullet::Bullet(double x, double y)
{
	_x = x;
	_y = y;
	_type = Game::NUM_BULLET;
	_speedy = -10.0;
}
