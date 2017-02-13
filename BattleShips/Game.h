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
	
private:
	void update();
	void render();
	void end();
	void readScores();

	bool turn;
	sf::RenderWindow window;
	Player player;
	Board board;
};

#endif