#ifndef BATTLE_H
#define BATTLE_H

#include "gameobject.h"
#include "player.h"
#include "enemy.h"

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
	bool ischoosing;
	gameobject* battlearray;

	//
	//functions
	//

	battle();
	battle(player user,enemy enemy1,enemy enemy2,enemy enemy3);
	void chooseatk();
	void battleturn();
	void checkalive(gameobject obj);
	void removeobject(int i);
	void enemyatk();
	void next_turn();
	~battle();

};

#endif //BATTLE_H