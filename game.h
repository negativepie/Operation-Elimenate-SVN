#ifndef GAME_H
#define GAME_H

#include <iostream>

class game{

int mode;
public:
	//gamestate variables
	const int intro = 1;
	const int play = 2;
	const int gameover = 3;
	const int pause = 4;

	//gamestate functions
	void gameIntro();
	void gamePause();
	void gameOver();
};

#endif //GAME_H