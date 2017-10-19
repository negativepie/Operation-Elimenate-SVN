#include "game.h"
#include "player.h"
#include "enemy.h"
#include "gameobject.h"
#include "battle.h"
#include "boss.h"
#include "rock.h"
#include "fire.h"
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(){
	//srand(time(NULL));

	game newgame = game();
	newgame.gameIntro();
	game* gameptr=&newgame;

	player reimu = player("Reimu",650,50,45,45,60);

	enemy enemy1 = enemy();
	//enemy enemy2 = enemy();
	//enemy enemy3 = enemy();
	//rock earthenemy = rock();
	//fire fireenemy = fire();
	//boss boss1= boss();

	enemy1.changename("Lesser Demon");
	//enemy2.changename("Fire Slime");
	//enemy3.changename("Demon Brute");

	player * reimuptr = &reimu;
	enemy * enemyptr1 = &enemy1;
	//enemy * enemyptr2 = &enemy2;
	//enemy * enemyptr3 = &enemy3;
	//rock * earthenemyptr = &earthenemy;
	//fire * fireenemyptr = &fireenemy;
	//boss * bossptr=&boss1;

	battle firstbattle = battle(gameptr);
	firstbattle.addgameobject(reimuptr);
	firstbattle.addgameobject(enemyptr1);
	//firstbattle.addgameobject(enemyptr2);
	//firstbattle.addgameobject(enemyptr3);
	//firstbattle.addgameobject(earthenemyptr);
	//firstbattle.addgameobject(fireenemyptr);
	//firstbattle.addgameobject(bossptr);
	firstbattle.battlestart();

	firstbattle.~battle();
	
	return 0;
}