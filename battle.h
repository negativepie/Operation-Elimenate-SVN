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
	int currentturn;
	int currentlyattacking;
	int participants;
	bool ischoosing;
	gameobject battlearray[2];

	//
	//functions
	//

	battle();
	battle(player user, enemy enemy1);
	void chooseatk();
	void battleturn();

};

#endif //BATTLE_H