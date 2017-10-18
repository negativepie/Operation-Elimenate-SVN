#include "enemy.h"
#include <string>

#ifndef MONSTERB_H
#define MONSTERB_H

class monsterb :public enemy{

public: 
	monsterb();

	void basicattack();
	void attack1();
	void attack2();
	void attack3();
	void attack4();

	~monsterb();



};
#endif //MONSTERB_H