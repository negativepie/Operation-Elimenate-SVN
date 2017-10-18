#include "fire.h"
#include <iostream>

fire::fire(){
 cry="You shall all be burnt to a crisp.";
 death_cry=" and now only flickering embers remain.";
 name="Shinmyoumaru Sukuna";
}

void fire::basicattack(){
 ismagic=false;
 dmgout=30;
 std::cout<<"Basic Punch"<<std::endl<<std::endl;
}

void fire::attack1(){
 ismagic=true;
 dmgout=20;
 std::cout<<"Flamethrower"<<std::endl<<std::endl;
}

void fire::attack2(){
 ismagic=false;
 dmgout=25;
 std::cout<<"Flare Blitz"<<std::endl<<std::endl;
}

void fire::attack3(){
 ismagic=true;
 dmgout=40;
 std::cout<<"Great Chaos Fireball"<<std::endl<<std::endl;
}

void fire::attack4(){
 ismagic=false;
 dmgout=50; 
 std::cout<<"Fire Punch"<<std::endl<<std::endl;
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

fire::~fire(){

}