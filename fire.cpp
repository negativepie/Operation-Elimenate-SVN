#include "fire.h"
#include <iostream>

fire::fire(){
 cry="You shall all be burnt to a crisp.";
 death_cry=" and now only flickering embers remain.";
}

void fire::basicattack(){
 std::cout<<"Basic Punch"<<std::endl<<std::endl;
}

void fire::attack1(){
 std::cout<<"Flamethrower"<<std::endl<<std::endl;
}

void fire::attack2(){
 std::cout<<"Heat Wave"<<std::endl<<std::endl;
}

void fire::attack3(){
 std::cout<<"Great Chaos Fireball"<<std::endl<<std::endl;
}

void fire::attack4(){
 std::cout<<"Great Combustion"<<std::endl<<std::endl;
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