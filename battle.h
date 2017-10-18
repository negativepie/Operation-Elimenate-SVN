#ifndef BATTLE_H
#define BATTLE_H

#include "gameobject.h"
#include "player.h"
#include "enemy.h"
#include "game.h"

class battle{
public:
	//
	//state variables
	//

	std::string atknumber;
	int random;
	int currentturn;
	int currentlyattacking;
	int participants;
	int which_enemy;
	int weather;
	bool ischoosing;
	int damage=0;
	int reheal;

	gameobject** battlearray;
	game* gamestate;

	//
	//functions
	//

	battle();
	battle(player* user, enemy* enemy1,enemy* enemy2, enemy* enemy3,game* gameinput);
	void chooseatk();
	void battleturn();
	void enemyatk();
	void next_turn();
	void weather_effect();
	~battle();

};

#endif //BATTLE_H