#include "gameobject.h"
#include <iostream>
#include <string>

bool gameobject::dead(){
	if(hp<=0){
		return true;
	} else {
		return false;
	}
	
}

void gameobject::takedmg(int dmg){
	hp=hp-dmg;
	if(hp<0){
		hp=0;
	}
}

int gameobject::check_hp(){
	return hp;
}

int gameobject::getcurrenthp(){  //set this to another hp stat, which is the initial, that way could call the player could reheal
	return hp;
}

int gameobject::getcurrentatk(){
	return atk;
}

int gameobject::getcurrentdef(){
	return def;
}

int gameobject::getcurrentspd(){
	return spd;
}

void gameobject::changename(std::string newname){
	name=newname;
}

void gameobject::changehpstat(int newhp){
	hp=newhp;
}

void gameobject::changeatkstat(int newatk){
	atk=newatk;
}

void gameobject::changedefstat(int newdef){
	def=newdef;
}

void gameobject::changespdstat(int newspd){
	spd=newspd;
}

std::string gameobject::getname(){
	return name;
}

void gameobject::basicattack(){
 std::cout<<"Basic Attack!"<<std::endl;
}

void gameobject::attack1(){
 std::cout<<"Attack 1!"<<std::endl;
}

void gameobject::attack2(){
 std::cout<<"Attack 2!"<<std::endl;
}

void gameobject::attack3(){
 std::cout<<"Attack 3!"<<std::endl;
}

void gameobject::attack4(){
 std::cout<<"Attack 4!"<<std::endl;
}

