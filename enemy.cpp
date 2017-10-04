#include "enemy.h"
#include <string>

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

enemy::~enemy(){

}