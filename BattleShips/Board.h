#ifndef BOARD_H
#define BOARD_H

#include <SFML\Graphics.hpp>
#include "Tile.h"

class Board {
public:
	Board();
	~Board();
	void update();
	void render(sf::RenderWindow & window);
private:
	int gridSize;
	std::vector<Tile> tiles;
};

#endif
