#ifndef  TILE_H
#define TILE_H

#include <SFML\Graphics.hpp>

class Tile {
public:
	Tile();
	~Tile();
	void render(sf::RenderWindow & window);
	int getXPos();
	int getYPos();
	void setPosition(int xIn, int yIn);
	void setHit();
	void setMiss();
private:
	int xPos;
	int yPos;
	bool hit;
	bool miss;
	bool unknown;
};

#endif
