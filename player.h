#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "gameobject.h"

class player :public gameobject{
public:

	//
	//functions
	//

	//constructors
	player();
	player(std::string initialname, int initialhp, int initialatk, int initialspatk, int initialspdef, int initialdef);

	//attack functions
	void basicattack();
	void attack1();
	void attack2();
	void attack3();
	void attack4();
	void levelup();

	//destructor
	~player();

};

#endif //PLAYER_H