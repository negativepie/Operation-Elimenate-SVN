#include "boss.h"
#include <iostream>

boss::boss(){
 cry="omae wa mou shindeiru";
 death_cry="N-NANII!??!?!??!?!?";
}

void boss::basicattack(){
atktype=0;
ismagic=false;
dmgout=100;
 std::cout<<name<<"Used a Basic Attack!"<<std::endl<<std::endl;
}

void boss::attack1(){
 std::cout<<name <<" Used Commit Message Requirement: A Very Hurtful Annoyance!"<<std::endl<<std::endl;
}

void boss::attack2(){
 std::cout<<name <<" Used Mirror Force!"<<std::endl<<std::endl;
}

void boss::attack3(){
 atktype=0;
 ismagic=false;
 dmgout=0;
 std::cout<<name<<" Says: Welcome to Uganda! VI VON ZULUL, BRUCE U ZULUL ACTION IS COMING!"<<std::endl<<std::endl;
 hp=hpstat;
 atk=9999;
 def=9999;
 spdef=9999;
 spatk=9999;

}

void boss::attack4(){
atktype=0;
ismagic=true;
dmgout=9999;
 std::cout<<name <<"Used its ultimate attack: Minor Object Error ~ Harsh Marking Penalty!"<<std::endl<<std::endl;
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