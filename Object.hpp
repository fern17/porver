#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <SFML/Graphics.hpp>

class Object
{
protected:
	sf::Sprite _spr;
	double _x, _y;
public:
	virtual void Step() {};

	sf::Sprite & GetSprite()
	{
		return _spr;
	}
};
#endif
