#include "rock.h"
#include <iostream>

rock::rock(){
 cry="Your corpse shall be buried in the sands, where it will be forever forgotten";
 death_cry=" disintegrated into sand.";
 name="Earth Elemental: Titan Obelisk of the Eastern Mountains";


	hpstat=1000;
	atkstat=85;
	spatkstat=10;
	defstat=110;
	spdefstat=20;

	hp=hpstat;
	atk=atkstat;
	spatk=spatkstat;
	def=defstat;
	spdef=spdefstat;
}

rock::rock(std::string initialname, int initialhp, int initialatk, int initialspatk, int initialspdef, int initialdef){
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

void rock::basicattack(){
 ismagic=false;
 dmgout=50;
 std::cout<<name<<" Used Rock Punch"<<std::endl<<std::endl;
}

void rock::attack1(){
 ismagic=false; 
 dmgout=45;
 std::cout<<name<<" Used Crunch"<<std::endl<<std::endl;
}

void rock::attack2(){
 ismagic=false;
 dmgout=75;
 std::cout<<name<<" Used Rock Slide"<<std::endl<<std::endl;
}

void rock::attack3(){
 ismagic=false;
 dmgout=5;
 atk=atk+10;
 std::cout<<name<<" Used Sand Attack"<<std::endl<<std::endl;
}

void rock::attack4(){
ismagic=false;
dmgout=rand()%226;
std::cout<<name <<" Used Earth Elemental Ultimate Attack: Ground Splitting Titanous Earthquake!"<<std::endl<<std::endl;
}


void rock::set_cry(std::string sound){
	cry=sound;
}
void rock::set_death_cry(std::string sound){
	death_cry=sound;
}

std::string rock::get_cry(){
	return cry;
}
std::string rock::get_death_cry(){
	return death_cry;
} 

void rock::levelup(){
	//placeholder
}

rock::~rock(){

}