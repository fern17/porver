#include "Bullet.hpp"


Bullet::Bullet(double x, double y, Game &gm) : _gameManager(gm)
{
	_x = x;
	_y = y;
	_type = Game::NUM_BULLET;
	_speedy = -10.0;

	_spr.SetImage(*_gameManager["bullet"]);
	_spr.SetPosition(_x,_y);
	CenterSprite();

}

void Bullet::Step()
{
	
}
