#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include "gameobject.h"

class enemy :public virtual gameobject{

public:
	enemy();

	int sp_atk;
	int sp_def;
	int mp;
	std::string name;

	void changename(std::string newname);
	std::string getname();
	virtual void basicattack();
	virtual void attack1();
	virtual void attack2();
	virtual void attack3();
	virtual void attack4();

 	~enemy();

};

#endif //ENEMY_H