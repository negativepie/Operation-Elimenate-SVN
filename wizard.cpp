#include "wizard.h"
#include <iostream>
#include <string>

wizard::wizard(std::string initialname){
	name = initialname;
	hp = 40;
	atk = 5;
	def = 2;
	spd = 10;
}

// the base class delcaration for these attacks are being called instead of the subclass version


void wizard::basicattack(){
	std::cout << "Tackle!" << std::endl;
}

void wizard::attack1(){
	std::cout << "Wind Blast! or something" << std::endl;
}

void wizard::attack2(){
	std::cout << "Flamethrower!" << std::endl;
}

void wizard::attack3(){
	std::cout << "Icy Rain!" << std::endl;
}

void wizard::attack4(){
	std::cout << "Thunder!" << std::endl;
}

wizard::~wizard(){
}