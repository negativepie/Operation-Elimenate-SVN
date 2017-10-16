#include "player.h"
#include <string>
#include <iostream>

player::player(){
	name="missingname";
	hpstat=1;
	atkstat=1;
	defstat=1;
	spdstat=1;

	hp=hpstat;
	atk=atkstat;
	def=defstat;
	spd=spdstat;
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
 std::cout<<"Basic Player Attack!"<<std::endl<<std::endl;
}

void player::attack1(){
 std::cout<<"Player Attack 1!"<<std::endl<<std::endl;
}

void player::attack2(){
 std::cout<<"Player Attack 2!"<<std::endl<<std::endl;
}

void player::attack3(){
 std::cout<<"Player Attack 3!"<<std::endl<<std::endl;
}

void player::attack4(){
 std::cout<<"Player Attack 4!"<<std::endl<<std::endl;
}

player::~player(){

}
