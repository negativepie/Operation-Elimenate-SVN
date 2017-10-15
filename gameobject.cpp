#include "gameobject.h"
#include <iostream>
#include <string>
#include <math.h>

bool gameobject::dead(){
	if(hp<=0){
		return true;
	} else {
		return false;
	}
	
}

void gameobject::takedmg(int dmg, int incomingatktype, bool isincomingmagic){
	if(isincomingmagic==true){
		dmg=dmg+ceil(dmg/def);
	}

	else{
		dmg=dmg+ceil(dmg/spdef);
	}

	hp=hp-dmg;

	if(hp<0){
		hp=0;
	}
}

int gameobject::check_hp(){
	return hp;
}

std::string gameobject::getname(){
	return name;
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

