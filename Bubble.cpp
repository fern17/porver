#include "Bubble.hpp"

Bubble::Bubble(int x, int y, int size, float speed_x, float speed_y)
: _size(size), _speed_x(speed_x), _speed_y(speed_x)
{
	_spr.SetPosition(x, y);
}

void Bubble::Step()
{
	_spr.Move(_speed_x, _speed_y);

	int x = _spr.GetPosition().x;
	int y = _spr.GetPosition().y;

}

int Bubble::GetSize()
{
	return _size;
}

