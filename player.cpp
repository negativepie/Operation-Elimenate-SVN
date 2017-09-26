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
}



std::string player::getname(){
	return name;
}

void player::gethpstat(){
	std::cout << hpstat;
}

void player::getatkstat(){
	std::cout << atkstat;
}

void player::getdefstat(){
	std::cout << defstat;
}

void player::getspdstat(){
	std::cout << spdstat;
}



void player::getcurrenthp(){
	std::cout << hp;
}

void player::getcurrentatk(){
	std::cout << atk;
}

void player::getcurrentdef(){
	std::cout << def;
}

void player::getcurrentspd(){
	std::cout << spd;
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