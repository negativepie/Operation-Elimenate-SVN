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

//sounds
std::string cry;
std::string death_cry;

//sound functions
void set_cry(std::string sound);
void set_death_cry(std::string sound);

void get_cry();
void get_death_cry(); 


	~boss();
};

#endif //BOSS_H