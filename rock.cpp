#include "rock.h"
#include <iostream>

rock::rock(){
 cry="Your corpse shall be burried in the sands";
 death_cry=" disintegrated into sand.";
 name="Temporary Tyranitar";
}

void rock::basicattack(){
 std::cout<<"Basic Punch"<<std::endl<<std::endl;
}

void rock::attack1(){
 std::cout<<"Crunch"<<std::endl<<std::endl;
}

void rock::attack2(){
 std::cout<<"Rock Slide"<<std::endl<<std::endl;
}

void rock::attack3(){
 std::cout<<"Sand Attack"<<std::endl<<std::endl;
}

void rock::attack4(){
 std::cout<<"Earthquake"<<std::endl<<std::endl;
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

rock::~rock(){

}