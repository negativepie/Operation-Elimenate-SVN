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

 	~enemy();

};

#endif //ENEMY_H