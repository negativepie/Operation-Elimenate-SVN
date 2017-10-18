#ifndef BOSS_H
#define BOSS_H

#include "gameobject.h"
#include "enemy.h"

class boss:public enemy{
public:
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

std::string get_cry();
std::string get_death_cry(); 

//placeholder

void levelup();

	~boss();
};

#endif //BOSS_H