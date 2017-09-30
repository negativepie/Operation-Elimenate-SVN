#include "player.h"
#include <string>
#include <iostream>

player::player(){
	name="missingname";
	hpstat=1;
	atkstat=1;
	defstat=1;
	spdstat=1;
}

player::player(std::string initialname, int initialhp, int initialatk, int initialdef, int initialspd){
	name=initialname;
	hpstat=initialhp;
	atkstat=initialatk;
	defstat=initialspd;
	spdstat=initialspd;
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

}

void player::attack1(){

}

void player::attack2(){

}

void player::attack3(){

}

void player::attack4(){

}



player::~player(){

}