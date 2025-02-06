#pragma once
#include "Framework/GameObject.h"
#include<math.h>
class Enemy : public GameObject
{
public:
	Enemy();
	~Enemy();

	void update(float dt) override;
private:
	sf::Vector2f direction;
	float speed;
};

