#include "fire.h"
#include <iostream>

fire::fire(){
 cry="You shall all be burnt to a crisp.";
 death_cry=" and now only flickering embers remain.";
 name="Fire Elemental: Shinmyoumaru Sukuna";

  	hpstat=1000;
	atkstat=30;
	spatkstat=90;
	defstat=20;
	spdefstat=40;
}

fire::fire(std::string initialname, int initialhp, int initialatk, int initialspatk, int initialspdef, int initialdef){
	name=initialname;

	hpstat=initialhp;
	atkstat=initialatk;
	spatkstat=initialspatk;
	defstat=initialdef;
	spdefstat=initialspdef;

	hp=hpstat;
	atk=atkstat;
	spatk=spatkstat;
	def=defstat;
	spdef=spdefstat;
}

void fire::basicattack(){
 ismagic=false;
 dmgout=30;
 std::cout<<name<<" Used Fire Slash"<<std::endl<<std::endl;
}

void fire::attack1(){
 ismagic=true;
 dmgout=35+rand()%11;
 std::cout<<name<<" Used Flamethrower"<<std::endl<<std::endl;
}

void fire::attack2(){
 ismagic=true;
 dmgout=45;
 std::cout<<name<<" Used Flare Blitz"<<std::endl<<std::endl;
}

void fire::attack3(){
 ismagic=true;
 dmgout=60;
 std::cout<<name<<" Used Great Chaos Fireball"<<std::endl<<std::endl;
}

void fire::attack4(){
 ismagic=true;
 dmgout=100; 
 std::cout<<name<<" Used Elemental Ultimate Attack: Light Sealing Chaos Flame"<<std::endl<<std::endl;
}


void fire::set_cry(std::string sound){
	cry=sound;
}
void fire::set_death_cry(std::string sound){
	death_cry=sound;
}

std::string fire::get_cry(){
	return cry;
}
std::string fire::get_death_cry(){
	return death_cry;
} 

void fire::levelup(){
	//placeholder
}

fire::~fire(){

}