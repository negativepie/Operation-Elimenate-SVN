#include "enemy.h"
#include <string>
#include <iostream>

enemy::enemy(){
	hp=50;
	atk=1;
	spatk=1;
	spdef=1;
	def=1;
	spd=1;
	name="missingname";
	isdead=false;
}

void enemy::changename(std::string newname){
	name=newname;
}

int enemy::check_hp(){
	return hp;
}

std::string enemy::getname(){
	return name;
}

void enemy::basicattack(){
 std::cout<<"Basic Enemy Attack!"<<std::endl<<std::endl;
}

void enemy::attack1(){
 std::cout<<"Enemy Attack 1!"<<std::endl<<std::endl;
}

void enemy::attack2(){
 std::cout<<"Enemy Attack 2!"<<std::endl<<std::endl;
}

void enemy::attack3(){
 std::cout<<"Enemy Attack 3!"<<std::endl<<std::endl;
}

void enemy::attack4(){
 std::cout<<"Enemy Attack 4!"<<std::endl<<std::endl;
}

enemy::~enemy(){

}