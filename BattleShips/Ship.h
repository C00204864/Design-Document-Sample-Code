#ifndef SHIP_H
#define SHIP_H

#include <SFML\Graphics.hpp>

class Ship {
public:
	Ship();
	~Ship();
	void update();
	void render(sf::RenderWindow & window);
	bool checkAlive();
	bool checkShip(int xIn, int yIn);
private:
	int xPos;
	int yPos;
	int length;
	bool alive;
};

#endif

