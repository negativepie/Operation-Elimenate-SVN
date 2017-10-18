#include "monsterb.h"
#include <string>
#include <iostream>

monsterb::monsterb(){
	name = "ksadk";
	hp = 50;
	atk = 4;
	def = 2;
	spd = 2;
}

void monsterb::basicattack(){
	std::cout << "basicattack"<< std::endl;
}

void monsterb::attack1(){
	std::cout << "attack1!" << std::endl;
}

void monsterb::attack2(){
	std::cout << "attack2" << std::endl;
}

void monsterb::attack3(){
	std::cout << "attack3" << std::endl;
}

void monsterb::attack4(){
	std::cout << "attack4" << std::endl;
}

monsterb::~monsterb(){
}