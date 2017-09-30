#include "gameobject.h"

bool gameobject::dead(){
	return hp<=0;
}

void gameobject::takedmg(int dmg){
	hp=hp-dmg;
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