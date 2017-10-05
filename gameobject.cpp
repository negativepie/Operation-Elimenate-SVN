#include "gameobject.h"
#include <iostream>
#include <string>

bool gameobject::dead(){
	return hp<=0;
}

void gameobject::takedmg(int dmg){
	hp=hp-dmg;
}

int gameobject::check_hp(){
	return hp;
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

