#include <iostream>
#ifndef GAME_H
#define GAME_H



class game{

int mode;
public:
	//gamestate variables
	const int intro = 1;
	const int play = 2;
	const int gameover = 3;
	const int pause = 4;
	
	std::string your_name;

	//gamestate functions
	//void gameIntro();
	//void gamePause();
	//void gameOver();
	
	game(); 
	void game_state(int selection);
	std::string getname();
//	player character_type(int num);

	//battle functions
};

#endif //GAME_H