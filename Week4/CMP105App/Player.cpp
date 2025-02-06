#include "Player.h"

Player::Player()
{

}
Player::~Player() 
{

}

void Player::handleInput(float dt)
{
	
	if(input->isKeyDown(sf::Keyboard::W))
	{
		move(0, -100 * dt);
	}	
	if(input->isKeyDown(sf::Keyboard::A))
	{
		move(-100 * dt, 0);
	}	
	if(input->isKeyDown(sf::Keyboard::S))
	{
		move(0, 100 * dt);
	}	
	if(input->isKeyDown(sf::Keyboard::D))
	{
		move(100 * dt, 0);
	}
}