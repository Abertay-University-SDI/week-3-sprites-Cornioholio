#include "Enemy.h"

Enemy::Enemy() 
{
	direction.x = rand() % -1 + 1;
	direction.y = rand() % -1 + 1;

	speed = 500;
}
Enemy::~Enemy() 
{
	
}

void Enemy::update(float dt) 
{
	move(direction.x * speed * dt, direction.y * speed * dt);
	if(getPosition().x > 1200 || getPosition().x < 0) 
	{
		direction.x = -1;
	}
	if (getPosition().y > 675 || getPosition().y < 0)
	{
		direction.y = -1;
	}
}