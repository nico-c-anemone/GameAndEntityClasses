// GameAndEntityClasses.cpp : This iteration introduces a Game class/object to rule them all!
// Nico Nico

// TODO : Add in the SFML code

#include "game.h"
#include <iostream>

int main()
{
	Game game;
	std::cout << "Game And Entity Classes by NicoNico!\n";
	game.init();
	game.run();
	game.shutdown();
	return 0;
}
