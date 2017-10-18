#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include "gameobject.h"

class enemy :public gameobject{

public:
	enemy();
	enemy(std::string initialname, int initialhp, int initialatk, int initialspatk, int initialspdef, int initialdef, int initialspd);

	virtual void basicattack();
	virtual void attack1();
	virtual void attack2();
	virtual void attack3();
	virtual void attack4();
	virtual void levelup();

 	~enemy();

};

#endif //ENEMY_H