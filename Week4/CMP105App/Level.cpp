#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects

	texturePlayer.loadFromFile("gfx/MushroomTrans.png");
	textureEnemy.loadFromFile("gfx/Goomba.png");

	playerObject.setInput(in);
	playerObject.setTexture(&texturePlayer);
	playerObject.setSize(sf::Vector2f(100, 100));
	playerObject.setPosition(100, 100);

	enemyObject.setTexture(&textureEnemy);
	enemyObject.setSize(sf::Vector2f(100, 100));
	enemyObject.setPosition(100, 100);

}
Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
	playerObject.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	enemyObject.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(playerObject);
	window->draw(enemyObject);

	endDraw();
}
