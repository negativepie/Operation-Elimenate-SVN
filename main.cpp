#include "game.h"
#include "player.h"
#include "enemy.h"
#include "gameobject.h"
#include "battle.h"
#include "boss.h"
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(){
	srand(time(NULL));
	game newgame = game();
	newgame.gameIntro();
	game* gameptr=&newgame;

	//e x t e n s i v e t e s t i n g

	//player reimu = player("Reimu",500,420,30,40,15,65);

	player reimu = player();

	enemy enemy1 = enemy();
	enemy enemy2 = enemy();
	enemy enemy3 = enemy();

	boss boss1= boss();

	enemy1.changename("Monster A");
	enemy2.changename("Monster B");
	enemy3.changename("Monster C");

	player * reimuptr = &reimu;
	enemy * enemyptr1 = &enemy1;
	enemy * enemyptr2 = &enemy2;
	enemy * enemyptr3 = &enemy3;
	boss * bossptr=&boss1;

	battle firstbattle = battle(reimuptr,bossptr,enemyptr2,enemyptr3,gameptr);
	
	return 0;
	
}