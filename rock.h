#ifndef ROCK_H
#define ROCK_H

#include "gameobject.h"
#include "enemy.h"

class rock:public enemy{
public:
	rock();
	rock(std::string initialname, int initialhp, int initialatk, int initialspatk, int initialspdef, int initialdef);

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

	~rock();
};

#endif //ROCK_H
