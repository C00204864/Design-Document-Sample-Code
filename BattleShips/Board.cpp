#include "Board.h"

// Default constructor
Board::Board()  : gridSize(2)
{
	for (int i = 0; i < gridSize; i++)
	{
		tiles.push_back(Tile());
	}
}

// Destructor
Board::~Board() {}

// Board update function
void Board::update()
{
	for (auto & tile : tiles)
	{
		tile.getXPos();
		tile.getYPos();
		tile.setHit();
		tile.setMiss();
		tile.setPosition(10, 10);
	}
}

// Board render function
void Board::render(sf::RenderWindow & window)
{
	window.draw(sf::CircleShape(0, 0));
	for (auto & tile : tiles)
	{
		tile.render(window);
	}
}