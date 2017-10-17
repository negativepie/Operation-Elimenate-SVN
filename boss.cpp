#include "boss.h"
#include <iostream>

boss::boss(){
 cry="missing boss cry";
 death_cry="missing death cry";
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

void boss::get_cry(){
	std::cout<<cry<<std::endl<<std::endl;
}
void boss::get_death_cry(){
	std::cout<<death_cry<<std::endl<<std::endl;
} 

boss::~boss(){

}


