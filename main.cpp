#include "game.h"
#include "player.h"
#include "enemy.h"
#include "gameobject.h"
#include "battle.h"
#include "wizard.h"
#include "fighter.h"
#include "MONSTERA.h"
#include "boss.h"

using namespace std;

int main(){
	game newgame = game();
	
	//int begin_game;
	
	//cout << "Enter 1 to... ; Enter 2 to...; ... " << endl;
	
	//cin >> begin_game; 
	
	newgame.game_state(1);
	
	newgame.game_state(2);
	
	string name = newgame.getname();

	//player user; 
	//user = newgame.character_type(charc_type);
	
	player user1 = player(name,40,10,10,10);

	player* user = &user1;
	
	//wizard user1 = wizard(name, 40, 5, 2, 3);
	
	game* gameptr=&newgame;

	enemy enemyC = enemy();
	enemy enemyB = enemy();
	enemy enemyD = enemy();
	enemy enemyE = enemy();
	boss SVN = boss();
	MONSTERA enemyA = MONSTERA();

	enemy* enemy1 = &enemyA;
	enemy* enemy2 = &enemyB;
	enemy* enemy3 = &enemyC;
	enemy* enemy4 = &enemyD;
	enemy* enemy5 = &enemyE;
	enemy* svnboss = &SVN;

	enemy3->changename("Monster A");
	enemy2->changename("Monster B");
	//enemy3.changename("Monster C");

	battle firstbattle = battle(user,enemy1,enemy2,enemy3,gameptr);
	
	battle secondbattle = battle(user,enemy4,enemy5,svnboss,gameptr);	

	return 0;
	
}