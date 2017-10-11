#include "game.h"
#include "player.h"
#include "enemy.h"
#include "gameobject.h"
#include "battle.h"

using namespace std;

int main(){
	game newgame = game();
	newgame.gameIntro();

	//e x t e n s i v e t e s t i n g
	player reimu = player("Reimu Hakurei",69,420,8008135,15);
	enemy enemyA = enemy();
	enemy enemyB = enemy();
	enemy enemyC = enemy();

	enemyA.changename("Monster A");
	enemyB.changename("Monster B");
	enemyC.changename("Monster C");

	battle firstbattle = battle(reimu,enemyA,enemyB,enemyC);
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