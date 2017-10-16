#include "fighter.h"
#include <string>
#include <iostream>

fighter::fighter(std::string initialname){
	name = initialname;
	hp = 70;
	atk = 10;
	def = 4;
	spd = 12;	
}

void fighter::displaystats(){
	std::cout << "Your Hp is " << hp << std::endl;
	std::cout << "Your Attack is " << atk << std::endl;
	std::cout << "Your Defense is " << def << std::endl;
	std::cout << "Your Speed is " << spd << std::endl;
}

void fighter::basicattack(){
	std::cout<<"Headbutt!"<<std::endl;
}

void fighter::attack1(){
	std::cout<<"Whirlwind Blade!"<<std::endl;
}

void fighter::attack2(){
	std::cout<<"Killing Edge!"<<std::endl;
}

void fighter::attack3(){
	std::cout<<"Twin Serpents!"<<std::endl;
}

void fighter::attack4(){
	std::cout<<"Uppercut!"<<std::endl;
}

fighter::~fighter(){
}