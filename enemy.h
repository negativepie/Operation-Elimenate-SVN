#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include "gameobject.h"

class enemy :public gameobject{

public:
	enemy();

	void changename(std::string newname);
	/*virtual*/ std::string getname();
	virtual void basicattack();
	virtual void attack1();
	virtual void attack2();
	virtual void attack3();
	virtual void attack4();
	int check_hp();
	void getsound();
	void changesound(std::string newsound);
	void change_death_cry(std::string newsound);
	void deathsound();

	std::string sound;
	std::string death_cry;

 	~enemy();

};

#endif //ENEMY_H