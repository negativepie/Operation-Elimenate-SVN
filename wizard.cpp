#include "wizard.h"
#include <iostream>
#include <string>

wizard::wizard(std::string initialname, int initialhp, int initialatk, int initialdef, int initialspd){
	name = initialname;
	hp = initialhp;
	atk = initialatk;
	def = initialdef;
	spd = initialspd;
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