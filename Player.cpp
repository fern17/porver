#include "Player.hpp"

Player::Player(const sf::Input& in) : _input(in)
{

}

int Player::GetLifes()
{
	return _lifes;
}
