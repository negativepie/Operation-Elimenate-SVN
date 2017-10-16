#include <string>
#include <iostream>
#include "player.h"

#ifndef FIGHTER_H
#define FIGHTER_H

class fighter: public player{
public:

	fighter(std::string initialname);
	
	void displaystats();
	
	void basicattack();
	void attack1();
	void attack2();
	void attack3();
	void attack4();
	
	~fighter();
};
#endif //FIGHTER_H