#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>

class gameobject{
public:

	//
	//state variables
	//
	
	//constant state variables
	std::string name;

	//battle variables
	int hp;
	int atk;
	int def;
	int spd;
	bool isdead=false;

	//
	//functions
	//
	
	//attack functions
	void basicattack();
	void attack1();
	void attack2();
	void attack3();
	void attack4();

	//
	virtual std::string getname();

	//constructors

	//death check function and destructor
	bool dead();
	void takedmg(int dmg);
	virtual int check_hp();

};

#endif //GAMEOBJECT_H