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

	player reimu = player("Reimu",500,420,30,40,15,65);

	//player reimu = player();

	enemy enemy1 = enemy();
	enemy enemy2 = enemy();
	enemy enemy3 = enemy();

	boss boss1= boss();

	enemy1.changename("Monster A");
	enemy2.changename("Monster B");
	enemy3.changename("Monster C");

	//player * reimuptr = &reimu;
	//enemy * enemyptr = &basicenemy;

	battle firstbattle = battle(reimu,boss1,enemy2,enemy3,gameptr);
	//std::cout << reimu.getname() << " you are now in a battle with a " << basicenemy.getname() << std::endl;
	//firstbattle.chooseatk();

	/*
	//name and stats testing testing
	std::cout << "The name of your player is " << reimu.getname() << std::endl;
	reimu.changename("Marisa Kirisame");
	std::cout << "The name of your player is now " << reimu.getname() << std::endl;
	*/
	
	return 0;
	
}