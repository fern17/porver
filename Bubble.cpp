#include "Bubble.hpp"


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

	_size = 128;
	for (int i = 1 ; i < (5-size) ; i ++)
	{
		_size /= 2;
	}
	_spr.SetScale((float)_size/128.f, (float)_size/128.f);
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

	static int asd = 0;
	asd ++;
	if (asd >= 150)
	{
		Destroy();
		asd = 0;
	}
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

