#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "gameobject.h"

class player :public gameobject{
public:

	//constant state variables
	std::string name;

	//constructors
	player();
	player(std::string initialname, int initialhp, int initialatk, int initialdef, int initialspd);
	
	//getter functions
	std::string getname();
	
	void displaystats();

	//attack functions
	virtual void basicattack();
	virtual void attack1();
	virtual void attack2();
	virtual void attack3();
	virtual void attack4();

	//destructor
	~player();

};

#endif //PLAYER_H