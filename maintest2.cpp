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
#include "fire.h"
#include "rock.h"


int main(){
	
	enemy enemy1 = enemy();
	enemy1.changename("Monster A");
	enemy1.changehpstat(10);
	enemy1.basciattack();
	std::cout << enemy1.getname() << std::endl;
	
	player user = player("Alex", 50,10,10,10);
	user.changename = "Kate";
	user.checkhp();
	user.changehpstat(10);
	std::cout << user.getname() << std::endl;
	
	fire enemy2 = fire();
	enemy2.attack1():
	enemy2.set_cry("Arrggh!");
	std::cout << enemy.get_cry() << std::endl;
	
	rock enemy3 = rock();
	enemy3.attack2();
	enemy3.set_death_cry("OH NOOOOO!");
	std::cout << enemy3.get_death_cry() << endl;
	
	boss svn = boss();
	svn.attack3();
	svn.changehpstat(1000);
	std::cout << svn.check_hp() << endl;
}