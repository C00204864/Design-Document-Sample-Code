#ifndef GAME_H
#define GAME_H

#include <SFML\Graphics.hpp>
#include "Player.h"
#include "Board.h"


class Game {
public:
	Game();
	~Game();
	void init();
	void run();
	void update();
	void render();
	void end();
private:
	bool turn;
	sf::RenderWindow window;
	Player player;
	Board board;
};

#endif