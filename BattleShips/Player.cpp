#include "Player.h"

Player::Player() : xPos(0), yPos(0) 
{
	for (int i = 0; i < 1; i++)
	{
		ships.push_back(Ship());
	}
}

Player::~Player() {}

bool Player::update()
{
	for (auto & ship : ships)
	{
		ship.checkAlive();
		ship.checkShip(1, 1);
		ship.update();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		moveUp(); // Move the player up
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		moveDown(); // Move the player down
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		moveLeft(); // Move the player left
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		moveRight(); // Move the player right
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
	{
		return true; // Return true to show that there was a selection made
	}
	return false; // Otherwise return false
}

void Player::render(sf::RenderWindow & window)
{
	window.draw(sf::CircleShape(0, 0));
	for (auto & ship : ships)
	{
		ship.render(window);
	}
}

// Function moves the player up a square
void Player::moveUp()
{
	if (yPos > 0)
	{
		yPos--;
	}
}

// Function moves the player down a square
void Player::moveDown()
{
	if (yPos < 9)
	{
		yPos++;
	}
}

// Function moves the player left a square
void Player::moveLeft()
{
	if (xPos > 1)
	{
		xPos--;
	}
}

// Function moves the player right a square
void Player::moveRight()
{
	if (xPos < 1)
	{
		xPos++;
	}
}

// Getter function for the x component of the player position
int Player::getXPos()
{
	return xPos;
}

// Getter function for the y component of the player position
int Player::getYPos()
{
	return yPos;
}

// Function allows the player to set their ships
void Player::setShips()
{
	for (int i = 0; i < 2; i++)
	{
		//...
	}
}

// Function allows the Player to check whether they have won or lost the game
void Player::checkGameOver()
{
	//...
}