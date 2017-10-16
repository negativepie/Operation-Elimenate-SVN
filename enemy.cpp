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
	sound="missing_sound";
	death_cry="missing_sound";
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

void enemy::changesound(std::string newsound){
	sound=newsound;
}

void enemy::getsound(){
std::cout<<sound<<std::endl<<std::endl;
}

void enemy::change_death_cry(std::string newsound){
	death_cry=newsound;
}

void enemy::deathsound(){
std::cout<<death_cry<<std::endl<<std::endl;
}

enemy::~enemy(){

}