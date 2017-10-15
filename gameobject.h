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

	int getcurrenthp();
	int getcurrentatk();
	int getcurrentdef();
	int getcurrentspd();
	
	//
	//functions
	//
	
	virtual void changename(std::string newname);
	virtual void changehpstat(int newhp);
	virtual void changeatkstat(int newatk);
	virtual void changedefstat(int newdef);
	virtual void changespdstat(int newspd);
	
	//attack functions
	virtual void basicattack();
	virtual void attack1();
	virtual void attack2();
	virtual void attack3();
	virtual void attack4();

	//
	virtual std::string getname();

	//constructors

	//death check function and destructor
	bool dead();
	void takedmg(int dmg);
	virtual int check_hp();

};

#endif //GAMEOBJECT_H