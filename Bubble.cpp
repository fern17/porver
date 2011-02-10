#include "Bubble.hpp"

const int Bubble::_sizes[] = {16, 32, 64, 128};

Bubble::Bubble(double x, double y, int size, float speed_x, float speed_y, Game &gm)
:  _speed_x(speed_x), _speed_y(speed_y), _gameManager(gm)
{
	_x = x;
	_y = y;
	_size = 300;
    _type = Game::NUM_BUBBLE;

	_spr.SetImage(*_gameManager["bubble"]);

	CenterSprite();

	_spr.SetPosition(_x,_y);

	_size = size;
	_spr.SetScale(float(_sizes[_size])/128.f, float(_sizes[_size])/128.f);
}

void Bubble::Step()
{
	if (_x+_sizes[_size] >= 1024 || _x-_sizes[_size] <= 0)
		_speed_x *= -1;
	if (_y+_sizes[_size] >= 768 || _y-_sizes[_size] <= 0)
		_speed_y *= -1;

	_x += _speed_x;
	_y += _speed_y;

	static int asd = 0;
	asd ++;
	if (asd >= 150)
	{
		Destroy();
		asd = 0;
	}

	_spr.SetPosition(_x, _y);
}

void Bubble::Destroy()
{
	_gameManager.RemoveObject(this);
	_gameManager.AddObject(new Bubble(_x, _y, _size-1, _speed_x, _speed_y, _gameManager));
	_gameManager.AddObject(new Bubble(_x, _y, _size-1, -_speed_x, _speed_y, _gameManager));
}

int Bubble::GetSize()
{
	return _size;
}

Bubble::~Bubble(){
	delete _img;
}

