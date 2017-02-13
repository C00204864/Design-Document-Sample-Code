#include "Ship.h"

// Default constructor function
Ship::Ship() : alive(true)
{

}

// Destructor function
Ship::~Ship()
{

}

// Check that the ship is still active
bool Ship::checkAlive()
{
	return alive;
}

// Get the ships system
bool Ship::checkShip(int x, int y)
{
	if (x == xPos && y == yPos)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Update function for the ship
void Ship::update()
{

}

// render function for the ship to draw it
void Ship::render(sf::RenderWindow & window)
{
	window.draw(sf::CircleShape(0, 0));
}