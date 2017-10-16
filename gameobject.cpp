#include "gameobject.h"
#include <iostream>
#include <string>
#include <math.h>

gameobject::gameobject(){
	//default values
	name="missingname";

	hpstat=50;
	atkstat=1;
	defstat=1;
	spdstat=1;
	spdefstat=1;
	spatkstat=1;

	hp=hpstat;
	atk=atkstat;
	def=defstat;
	spd=spdstat;
	spdef=spdefstat;
	spatk=spatkstat;

	type=0;

	isdead=false;
}

bool gameobject::dead(){
	if(hp<=0){
		return true;
	} else {
		return false;
	}
	
}

void gameobject::takedmg(int dmg, int incomingatktype, bool isincomingmagic){
	if(isincomingmagic==true){
		dmg=dmg+ceil(dmg/spdef);
	}

	else{
		dmg=dmg+ceil(dmg/def);
	}

	hp=hp-dmg;

	if(hp<0){
		hp=0;
	}
}



void gameobject::basicattack(){

}

void gameobject::attack1(){

}

void gameobject::attack2(){

}

void gameobject::attack3(){

}

void gameobject::attack4(){

}



int gameobject::check_hp(){
	return hp;
}

std::string gameobject::getname(){
	return name;
}

int gameobject::gethpstat(){
	return hpstat;
}

int gameobject::getatkstat(){
	return atkstat;
}

int gameobject::getdefstat(){
	return defstat;
}

int gameobject::getspdstat(){
	return spdstat;
}



int gameobject::getcurrenthp(){
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
	hpstat=newhp;
}

void gameobject::changeatkstat(int newatk){
	atkstat=newatk;
}

void gameobject::changedefstat(int newdef){
	defstat=newdef;
}

void gameobject::changespdstat(int newspd){
	spdstat=newspd;
}

gameobject::~gameobject(){

}