#include "game.h"
#include "player.h"
#include "enemy.h"
#include "gameobject.h"
#include "battle.h"
#include "wizard.h"
#include "fighter.h"
#include "MONSTERA.h"
#include "monsterb.h"
#include "boss.h"

using namespace std;

int main(){
	game newgame = game();
	
	newgame.game_state(1);
	
	newgame.game_state(2);
	
	string name = newgame.getname();

	player user1 = player(name,40,10,10,10);

	player* user = &user1;
	
	game* gameptr=&newgame;

	MONSTERA enemyA = MONSTERA();
	monsterb enemyC = monsterb();
	enemy enemyB = enemy();
	enemy enemyD = enemy();
	enemy enemyE = enemy();
	boss SVN = boss();
	

	enemy* enemy1 = &enemyA;
	enemy* enemy2 = &enemyB;
	enemy* enemy3 = &enemyC;
	enemy* enemy4 = &enemyD;
	enemy* enemy5 = &enemyE;
	enemy* svnboss = &SVN;

	//enemy3->changename("Monster A");
	enemy2->changename("Monster B");
	//enemy3.changename("Monster C");

	battle firstbattle = battle(user,enemy1,enemy2,enemy3,gameptr);

	user->changehpstat(50);
	
	battle secondbattle = battle(user,enemy4,enemy5,svnboss,gameptr);	

	return 0;
	
}