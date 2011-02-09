#include "Player.hpp"

unsigned int posx = 200;
unsigned int posy = 700;

Player::Player(const sf::Input& in, Game& gm) : _input(in), _gameManager(gm)
{
	_x = posx;
	_y = posy;

	_img = new sf::Image();
	_img->LoadFromFile("sprites/player.png");
	_spr.SetImage(*_img);
	_spr.SetPosition(_x,_y);
	CenterSprite();

    _type = Game::NUM_PLAYER;
    _speedx = 5;
}

void Player::Step()
{
	if(_input.IsKeyDown(sf::Key::A))
		_x -= _speedx;
	if(_input.IsKeyDown(sf::Key::D))
		_x += _speedx;
	if(_input.IsKeyDown(sf::Key::Space)){
		_gameManager.AddObject(new Bullet(_x,_y));
	}


	_spr.SetX(_x);
}

int Player::GetLifes()
{
	return _lifes;
}

Player::~Player(){
	delete _img;
}
