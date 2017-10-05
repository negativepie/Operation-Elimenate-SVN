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

	int atknumber;
	int random;
	int currentturn;
	int currentlyattacking;
	int participants;
	bool ischoosing;
	gameobject* battlearray;

	//
	//functions
	//

	battle();
	battle(player user, enemy enemy1);
	void chooseatk();
	void battleturn();
	void checkalive(gameobject obj);
	void removeobject(int i);
	void enemyatk();
	void p();
	~battle();

};

#endif //BATTLE_H