#include "Player.hpp"

Player::Player(const sf::Input& in) : _input(in)
{
    _type = Game::NUM_PLAYER;
}

void Player::Step()
{
}

int Player::GetLifes()
{
	return _lifes;
}
