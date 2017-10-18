#include "boss.h"
#include <iostream>

boss::boss(){
 cry="You will never get past me. You shall fail OOP!";
 death_cry="BOOM. I suppose you should ADDS........";
 name="SVN Marking System";
}

void boss::basicattack(){
 std::cout<<"Boss Attack!"<<std::endl<<std::endl;
}

void boss::attack1(){
 std::cout<<"Boss Attack 1!"<<std::endl<<std::endl;
}

void boss::attack2(){
 std::cout<<"Boss Attack 2!"<<std::endl<<std::endl;
}

void boss::attack3(){
 std::cout<<"Boss Attack 3!"<<std::endl<<std::endl;
}

void boss::attack4(){
 std::cout<<"Boss Attack 4!"<<std::endl<<std::endl;
}


void boss::set_cry(std::string sound){
	cry=sound;
}
void boss::set_death_cry(std::string sound){
	death_cry=sound;
}

std::string boss::get_cry(){
	return cry;
}
std::string boss::get_death_cry(){
	return death_cry;
} 

boss::~boss(){

}


