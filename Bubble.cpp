#include "Bubble.hpp"

Bubble::Bubble(int x, int y, int size, float speed)
: _size(size), _speed(speed)
{
    _type = Game::NUM_BUBBLE;
	_spr.SetPosition(x, y);
}

void Bubble::Step()
{
}

int Bubble::GetSize()
{
	return _size;
}

