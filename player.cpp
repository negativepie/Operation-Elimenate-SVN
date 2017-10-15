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



std::string player::getname(){
	return name;
}

int player::gethpstat(){
	return hpstat;
}

int player::getatkstat(){
	return atkstat;
}

int player::getdefstat(){
	return defstat;
}

int player::getspdstat(){
	return spdstat;
}



int player::getcurrenthp(){
	return hp;
}

int player::getcurrentatk(){
	return atk;
}

int player::getcurrentdef(){
	return def;
}

int player::getcurrentspd(){
	return spd;
}



void player::changename(std::string newname){
	name=newname;
}

void player::changehpstat(int newhp){
	hpstat=newhp;
}

void player::changeatkstat(int newatk){
	atkstat=newatk;
}

void player::changedefstat(int newdef){
	defstat=newdef;
}

void player::changespdstat(int newspd){
	spdstat=newspd;
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
