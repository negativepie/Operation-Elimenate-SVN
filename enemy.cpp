#include "enemy.h"
#include <string>

enemy::enemy(){
	HP=1;
	MP=1;

	atk=1;
	sp_atk=1;

	sp_def=1;
	def=1;

	spd=1;

	name="?";

	alive=true;
}

enemy::set_name(std::string pname){
	name=pname;
}

enemy::check_dead(){
	if(HP<1){
		alive=false;
	}
}

enemy::take_dmg(int damage){
	HP=HP-damage;
}



enemy::~enemy(){

}