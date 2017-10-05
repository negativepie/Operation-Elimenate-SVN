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

void enemy::take_dmg(int n){
	hp=hp-n;
}

int enemy::check_hp(){
	return hp;
}

std::string enemy::getname(){
	return name;
}

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

}