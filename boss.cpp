#include "boss.h"
#include <iostream>

boss::boss(){
 cry=" You will never get past me. You shall fail OOP!";
 death_cry="BOOM. I suppose you should take ADDS next........";
 name="SVN Marking System";
}

void boss::basicattack(){
 std::cout<<"Boss Attack!"<<std::endl<<std::endl;
}

void boss::attack1(){
 std::cout<<"Unforgiving Scripts"<<std::endl<<std::endl;
}

void boss::attack2(){
 std::cout<<"SVN Error"<<std::endl<<std::endl;
}

void boss::attack3(){
 std::cout<<"You Missed a Space!"<<std::endl<<std::endl;
}

void boss::attack4(){
 std::cout<<"Syntax Error"<<std::endl<<std::endl;
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


