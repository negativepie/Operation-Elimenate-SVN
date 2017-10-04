#include "game.h"
#include "player.h"
#include "enemy.h"
#include "gameobject.h"
#include "battle.h"

using namespace std;

int main(){
	game newgame = game();
	newgame.gameIntro();

	//e x t e n s i v ve t e s t i n g
	player reimu = player("Reimu Hakurei",69,420,8008135,15);
	enemy basicenemy = enemy();
	basicenemy.changename("Monster A");

	battle firstbattle = battle(reimu,basicenemy);
	cout << "you are now in a battle with a " << basicenemy.getname() << endl;
	firstbattle.chooseatk();


	/*
	//name and stats testing testing
	std::cout << "The name of your player is " << reimu.getname() << std::endl;
	reimu.changename("Marisa Kirisame");
	std::cout << "The name of your player is now " << reimu.getname() << std::endl;
	*/
	
	return 0;
	
}