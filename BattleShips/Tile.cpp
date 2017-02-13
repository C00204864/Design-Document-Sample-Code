#include "Tile.h"

Tile::Tile() {}

Tile::~Tile() {}

void Tile::render(sf::RenderWindow & window)
{
	window.draw(sf::CircleShape(0, 0));
}

// Getter function for the x component of the tile position
int Tile::getXPos()
{
	return xPos;
}

// Getter function for the y component of the tile position
int Tile::getYPos()
{
	return yPos;
}

// Function sets the poition of the tile
void Tile::setPosition(int xIn, int yIn)
{
	xPos = xIn;
	yPos = yIn;
}

// Function sets the tile yto the hit state
void Tile::setHit()
{
	hit = true;
	unknown = false;
}

// Function sets the tile to the miss state
void Tile::setMiss()
{
	miss = true;
	unknown = false;
}