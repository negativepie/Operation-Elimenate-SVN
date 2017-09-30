#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include "gameobject.h"

class enemy :public gameobject{

public:
	enemy();

	int hp;
	int mp;
	int atk;
	int sp_atk;
	int sp_def;
	int def;
	int spd;
	std::string name;

	bool alive;

	void changename(std::string newname);
	std::string getname();
	void basicattack();
	void attack1();
	void attack2();
	void attack3();
	void attack4();

 	~enemy();

};

#endif //ENEMY_H