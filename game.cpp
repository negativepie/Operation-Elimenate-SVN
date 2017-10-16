#include "game.h"

void game::gameIntro(){
	std::cout << "" << std::endl << std::endl;
}

void game::gameOver(){
	std::cout << "YOU DIED" << std::endl<< std::endl<< std::endl << "GAME OVER" << std::endl;
}

void game::gamePause(){
	std::cout << "Game Paused" << std::endl;
}