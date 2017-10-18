#include "enemy.h"
#include <string>
#include <iostream>

enemy::enemy(){
	name="Monster";

	hpstat=500;
	atkstat=30;
	spatkstat=30;
	defstat=40;
	spdefstat=15;
	spdstat=45;

	hp=hpstat;
	atk=atkstat;
	spatk=spatkstat;
	def=defstat;
	spdef=spdefstat;
	spd=spdstat;
}

enemy::enemy(std::string initialname, int initialhp, int initialatk, int initialspatk, int initialspdef, int initialdef, int initialspd){
	name=initialname;

	hpstat=initialhp;
	atkstat=initialatk;
	spatkstat=initialspatk;
	defstat=initialspd;
	spdefstat=initialspdef;
	spdstat=initialspd;

	hp=hpstat;
	atk=atkstat;
	spatk=spatkstat;
	def=defstat;
	spdef=spdefstat;
	spd=spdstat;
}

void enemy::basicattack(){
	atktype=0;
	ismagic=false;
	dmgout=5;
 std::cout<<"Basic Enemy Attack!"<<std::endl<<std::endl;
}

void enemy::attack1(){
	atktype=0;
	ismagic=false;
	dmgout=5;
 std::cout<<"Enemy Attack 1!"<<std::endl<<std::endl;
}

void enemy::attack2(){
	atktype=0;
	ismagic=false;
	dmgout=5;
 std::cout<<"Enemy Attack 2!"<<std::endl<<std::endl;
}

void enemy::attack3(){
	atktype=0;
	ismagic=false;
	dmgout=5;
 std::cout<<"Enemy Attack 3!"<<std::endl<<std::endl;
}

void enemy::attack4(){
	atktype=0;
	ismagic=false;
	dmgout=5;
 std::cout<<"Enemy Attack 4!"<<std::endl<<std::endl;
}

enemy::~enemy(){

}