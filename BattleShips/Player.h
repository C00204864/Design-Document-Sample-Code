#ifndef PLAYER_H
#define PLAYER_H

#include <SFML\Graphics.hpp>
#include "Ship.h"

class Player {
public:
	Player();
	~Player();
	bool update();
	void render(sf::RenderWindow & window);
	int getXPos();
	int getYPos();
	void setShips();
	void checkGameOver();
private:
	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();

	bool turn;
	int xPos;
	int yPos;

	std::vector<Ship> ships;
};

#endif

