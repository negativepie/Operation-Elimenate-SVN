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
 	std::cout<<name<<" Used a Basic Attack!"<<std::endl<<std::endl;
}

void enemy::attack1(){
	atktype=0;
	ismagic=true;
	dmgout=13;
 	std::cout<<name<<" Used Lesser Curse!"<<std::endl<<std::endl;
}

void enemy::attack2(){
	atktype=0;
	ismagic=false;
	dmgout=20;
 	std::cout<<name<<" Used Body Slam!"<<std::endl<<std::endl;
}

void enemy::attack3(){
	atktype=3;
	ismagic=true;
	dmgout=30;
 	std::cout<<name<<" Used Lesser Fire Magic!"<<std::endl<<std::endl;
}

void enemy::attack4(){
	if(hp/hpstat<35){
		atktype=0;
		ismagic=true;
		dmgout=45;
		std::cout<<name<<" Infused its body with magical demon energy and used Enraged Attack!"<<std::endl<<std::endl;
	}

	else{
		std::cout<<name<< "Did nothing."<<std::endl<<std::endl;
	}
}

void enemy::levelup(){
	//placeholder
}

enemy::~enemy(){

}