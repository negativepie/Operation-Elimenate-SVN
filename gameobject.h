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
	int hpstat=1;
	int atkstat=1;
	int defstat=1;
	int spdstat=1;

	//battle variables
	int hp=1;
	int atk=1;
	int def=1;
	int spd=1;
	bool isdead=0;

	//
	//functions
	//
	
	//attack functions
	void basicattack();
	void attack1();
	void attack2();
	void attack3();
	void attack4();

	//constructors

	//death check function and destructor
	bool dead();
	void takedmg(int dmg);
	int check_hp();

};

#endif //GAMEOBJECT_H