#ifndef BOSS_H
#define BOSS_H

#include "gameobject.h"
#include "enemy.h"

class boss:public enemy{
	boss();



void basicattack();
void attack1();
void attack2();
void attack3();
void attack4();




	~boss();
};

#endif //BOSS_H