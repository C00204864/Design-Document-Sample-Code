#include "Game.h"

// Default constructor function
Game::Game() : window(sf::VideoMode(800, 600), "Sample Code Solution", sf::Style::Default)
{

}

// Destructor function
Game::~Game()
{

}

// Initialise function
void Game::init()
{

}

// Function for running the game itself
void Game::run()
{
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) // Check if there was a window close event
			{
				end();
			}
		}
		update(); // Update the game
		render(); // Render the game
	}
}

// Function updates in game objects
void Game::update()
{
	player.update();
	board.update();
}

// Function Renders in game objects
void Game::render()
{
	window.clear();
	player.render(window); // Draw the player
	board.render(window);
	window.display();
}

void Game::end()
{
	window.close(); // Close the render window
}
