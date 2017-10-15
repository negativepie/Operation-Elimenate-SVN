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

void player::displaystats(){
	std::cout << "Your Hp is " << hp << std::endl;
	std::cout << "Your Attack is " << atk << std::endl;
	std::cout << "Your Defense is " << def << std::endl;
	std::cout << "Your Speed is " << spd << std::endl;
}

void player::basicattack(){
 std::cout<<"Basic Attack!"<<std::endl;
}

void player::attack1(){
 std::cout<<"Attack 1!"<<std::endl;
}

void player::attack2(){
 std::cout<<"Attack 2!"<<std::endl;
}

void player::attack3(){
 std::cout<<"Attack 3!"<<std::endl;
}

void player::attack4(){
 std::cout<<"Attack 4!"<<std::endl;
}


std::string player::getname(){
	return name;
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
	hp=newhp;
}

void player::changeatkstat(int newatk){
	atk=newatk;
}

void player::changedefstat(int newdef){
	def=newdef;
}

void player::changespdstat(int newspd){
	spd=newspd;
}

player::~player(){
}
