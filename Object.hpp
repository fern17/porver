#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <SFML/Graphics.hpp>

class Object
{
protected:
	sf::Sprite _spr;
	double _x, _y;
	unsigned int _type;
public:
	virtual void Step() {};

    unsigned int GetType(){
        return _type;
    }

	sf::Sprite & GetSprite()
	{
		return _spr;
	}

	void CenterSprite()
	{
		_spr.SetCenter(_spr.GetImage()->GetWidth()/2, _spr.GetImage()->GetHeight()/2);
	}
};
#endif
