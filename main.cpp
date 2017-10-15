#include "game.h"
#include "player.h"
#include "enemy.h"
#include "gameobject.h"
#include "battle.h"
#include "wizard.h"

using namespace std;

int main(){
	game newgame = game();
	
	//int begin_game;
	
	//cout << "Enter 1 to... ; Enter 2 to...; ... " << endl;
	
	//cin >> begin_game; 
	
	newgame.game_state(1);
	
	newgame.game_state(2);
	
	string name = newgame.getname();
	
	int hpstat;
	int defstat;
	int atkstat;
	int spdstat;
	
	//int charc_type;
	
	//cin >> charc_type;
	
	//newgame.character_type(charc_type);
	
	//hpstat = user1.currenthp();
	
	/* if(charc_type = 1){
		std::cout << "Hi" << std::endl;
		wizard user1 = wizard();
		hpstat = user1.getcurrenthp();
		defstat = user1.getcurrentdef();
		atkstat = user1.getcurrentatk();
		spdstat = user1.getcurrentspd();
		
	} */
	
	//player user = player(name,60,10,10,10);
	
	wizard user1 = wizard(name, 40, 5, 2, 3);
	
	//cout << user.getcurrenthp() << endl;
	

	game* gameptr=&newgame;

	enemy enemy1 = enemy();
	enemy enemy2 = enemy();
	enemy enemy3 = enemy();

	enemy1.changename("Monster A");
	enemy2.changename("Monster B");
	enemy3.changename("Monster C");

	
	//battle firstbattle = battle(user,enemy1,enemy2,enemy3,gameptr);
	
	battle secondbattle = battle(user1,enemy1,enemy2,enemy3,gameptr);
	
		//newgame.gameIntro();
//e x t e n s i v e t e s t i n g
	//player reimu = player("Reimu Hakurei",69,420,8008135,15);
	/*
	//name and stats testing testing
	std::cout << "The name of your player is " << reimu.getname() << std::endl;
	reimu.changename("Marisa Kirisame");
	std::cout << "The name of your player is now " << reimu.getname() << std::endl;
	*/
	//player * reimuptr = &reimu;
	//enemy * enemyptr = &basicenemy;

	return 0;
	
}