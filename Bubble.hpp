#ifndef BUBBLE_HPP
#define BUBBLE_HPP

#include "Object.hpp"

class Bubble : public Object
{
protected:
	int _size;
	float _speed_x, _speed_y;
	Game & _gameManager;

	static const int _sizes[];

public:
	Bubble(double x,double y, int size, float speed_x, float speed_y, Game &gm);
	~Bubble();
	virtual void Step();

	void Destroy();
	int GetSize();
};

#endif
