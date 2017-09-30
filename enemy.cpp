#include "enemy.h"
#include <string>

enemy::enemy(){
	hp=1;
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

std::string enemy::getname(){
	return name;
}

enemy::~enemy(){

}