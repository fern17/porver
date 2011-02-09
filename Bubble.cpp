#include "Bubble.hpp"

Bubble::Bubble(int x, int y, int size, float speed_x, float speed_y)
: _size(size), _speed_x(speed_x), _speed_y(speed_x)
{
	_spr.SetPosition(x, y);

	CenterSprite();
}

void Bubble::Step()
{
	_spr.Move(_speed_x, _speed_y);

	int x = _spr.GetPosition().x;
	int y = _spr.GetPosition().y;

	if (x+_size >= 1024 || x-_size <= 0)
		_speed_x *= -1;
	if (y+_size >= 768 || y-_size <= 0)
		_speed_y *= -1;
}

int Bubble::GetSize()
{
	return _size;
}

