#include "enemy.h"
#include <string>
#include <iostream>

enemy::enemy(){
	name="Monster";

	cry="Grah!";
 	death_cry="Argh!";

	hpstat=3;
	atkstat=30;
	spatkstat=30;
	defstat=40;
	spdefstat=40;

	hp=hpstat;
	atk=atkstat;
	spatk=spatkstat;
	def=defstat;
	spdef=spdefstat;
}

enemy::enemy(std::string initialname, int initialhp, int initialatk, int initialspatk, int initialspdef, int initialdef){
	name=initialname;

	hpstat=initialhp;
	atkstat=initialatk;
	spatkstat=initialspatk;
	defstat=initialdef;
	spdefstat=initialspdef;

	hp=hpstat;
	atk=atkstat;
	spatk=spatkstat;
	def=defstat;
	spdef=spdefstat;
}

void enemy::basicattack(){
	ismagic=false;
	dmgout=5;
 	std::cout<<name<<" Used a Basic Attack!"<<std::endl<<std::endl;
}

void enemy::attack1(){
	ismagic=true;
	dmgout=13;
 	std::cout<<name<<" Used Lesser Curse!"<<std::endl<<std::endl;
}

void enemy::attack2(){
	ismagic=false;
	dmgout=20;
 	std::cout<<name<<" Used Body Slam!"<<std::endl<<std::endl;
}

void enemy::attack3(){
	ismagic=true;
	dmgout=30;
 	std::cout<<name<<" Used Lesser Fire Magic!"<<std::endl<<std::endl;
}

void enemy::attack4(){
	if(hp/hpstat<35){
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