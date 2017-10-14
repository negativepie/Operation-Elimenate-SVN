#include "player.h"
#include <string>
#include <iostream>

player::player(){
	name="missingname";
	hp=1;
	atk=1;
	def=1;
	spd=1;
}

player::player(std::string initialname, int initialhp, int initialatk, int initialdef, int initialspd){
	name=initialname;
	hp=initialhp;
	atk=initialatk;
	def=initialspd;
	spd=initialspd;
}



std::string player::getname(){
	return name;
}

int player::gethpstat(){
	return hp;
}

int player::getatkstat(){
	return atk;
}

int player::getdefstat(){
	return def;
}

int player::getspdstat(){
	return spd;
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

player::~player(){

}
