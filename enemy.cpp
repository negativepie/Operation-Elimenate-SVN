#include "enemy.h"
#include <string>
#include <iostream>

enemy::enemy(){
	hp=50;
	mp=1;
	atk=1;
	sp_atk=1;
	sp_def=1;
	def=1;
	spd=1;
	name="missingname";
	alive=true;
}

void enemy::changename(std::string newname){
	name=newname;
}

void enemy::take_dmg(int n){     // do we have to do this? the gameobject class already has an initilisation for this and it will be the same for all gameobjects.
	hp=hp-n;
}

int enemy::check_hp(){
	return hp;
}

std::string enemy::getname(){
	return name;
}


// this functions shouldn't be defined here, they are exactly the same as the gameobject
// what should happen is that each type of enemy should redefine these functions in their own classes
void enemy::basicattack(){
 std::cout<<"Basic Attack!"<<std::endl;
}

void enemy::attack1(){
 std::cout<<"Attack 1!"<<std::endl;
}

void enemy::attack2(){
 std::cout<<"Attack 2!"<<std::endl;
}

void enemy::attack3(){
 std::cout<<"Attack 3!"<<std::endl;
}

void enemy::attack4(){
 std::cout<<"Attack 4!"<<std::endl;
}

enemy::~enemy(){
	//delete enemy; //is this valid?
	//could put sound effects here
}