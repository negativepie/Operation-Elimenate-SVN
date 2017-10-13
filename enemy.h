#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include "gameobject.h"

class enemy :public gameobject{

public:
	enemy();         //do we need to define a damage varibale, since the attacks will do different damage depending on the enemy?

	int hp;
	int mp;
	int atk;
	int sp_atk;
	int sp_def;
	int def;
	int spd;
	std::string name;
	
	//int dmg;

	bool alive;

	void changename(std::string newname);
	/*virtual*/ std::string getname();
	virtual void basicattack();
	virtual void attack1();
	virtual void attack2();
	virtual void attack3();
	virtual void attack4();

	void take_dmg(int n);
	int check_hp();

 	~enemy();

};

#endif //ENEMY_H
