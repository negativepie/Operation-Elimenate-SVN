#include "boss.h"
#include <iostream>

boss::boss(){
 cry=" You will never get past me. You shall fail OOP!";
 death_cry="BOOM. I suppose you should take ADDS next........";
 name="SVN Marking System";
}

void boss::basicattack(){
 atktype=0;
 ismagic=false;
 dmgout=100;
 std::cout<<"Unbalanced Weighting"<<std::endl<<std::endl;
}

void boss::attack1(){
 atktype=0;
 ismagic=true;
 dmgout=100;
 std::cout<<"Unforgiving Scripts"<<std::endl<<std::endl;
}

void boss::attack2(){
 atktype=1;
 ismagic=true;
 dmgout=90;
 std::cout<<"You Had a Space!!"<<std::endl<<std::endl;
}

void boss::attack3(){
 atktype=0;
 ismagic=false;
 dmgout=0;

 hp=hpstat;
 atk=9999;
 def=9999;
 spdef=9999;
 spatk=9999;

 std::cout<<"You Missed a Space!!"<<std::endl<<std::endl;
}

void boss::attack4(){
 atktype=0;
 ismagic=true;
 dmgout=9999;
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


