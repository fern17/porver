#ifndef BUBBLE_HPP
#define BUBBLE_HPP

#include "Object.hpp"

class Bubble : public Object
{
protected:
	int _size;
	float _speed;

public:
	Bubble(int x, int y, int size, float speed);
	virtual void Step();

	int GetSize();
};

#endif
