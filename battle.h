#ifndef BATTLE_H
#define BATTLE_H

#include "gameobject.h"
#include "player.h"
#include "enemy.h"
#include "game.h"
#include "boss.h"

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
	gameobject** battlearray;
	game* gamestate;

	

	//
	//functions
	//

	battle();
	battle(game* gameinput);
	void chooseatk();
	void battleturn();
	void removeobject(int i);
	void enemyatk();
	void next_turn();
	void weather_effect();
	void menu();
	void addgameobject(gameobject *object);
	void battlestart();
	~battle();

};

#endif //BATTLE_H