#include "player.h"
#include <string>
#include <iostream>

player::player(){

}

player::player(std::string initialname, int initialhp, int initialatk, int initialdef, int initialspd){
	name=initialname;

	hpstat=initialhp;
	atkstat=initialatk;
	defstat=initialspd;
	spdstat=initialspd;

	hp=hpstat;
	atk=atkstat;
	def=defstat;
	spd=spdstat;
}

void level(){

}

void player::basicattack(){
	atktype=0;
	ismagic=false;
	std::cout<<name <<"Attacks with a basic attack!"<<std::endl<<std::endl;
}

void player::attack1(){
	atktype=std::rand()%5;
	ismagic=false;
	std::cout<<name <<"Used Supersonic Elemental Drill!"<<std::endl<<std::endl;
}

void player::attack2(){
	atktype=0;
	ismagic=false;
	std::cout<<name <<""<<std::endl<<std::endl;
}

void player::attack3(){
	atktype=0;
	ismagic=true;
	std::cout<<"Player Attack 3!"<<std::endl<<std::endl;
}

void player::attack4(){
	atktype=0;
	ismagic=true;
	std::cout<<"Used Eastern Spell of the Gensokyo Magical Girls: Bullet Hell!"<<std::endl<<std::endl;
}

/*void f(){
	std::cout << "this is a test" << std::endl;
}*/

player::~player(){

}
