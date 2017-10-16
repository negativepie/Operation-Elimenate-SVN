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
	int hpstat;
	int atkstat;
	int defstat;
	int spdstat;

	//battle variables
	int hp=50;
	int atk=1;
	int def=1;
	int spd=1;
	int spdef;
	int spatk;
	bool isdead=false;
	int atktype=0;
	int type=0;
	bool ismagic=false;

	//
	//functions
	//
	
	//attack functions
	virtual void basicattack()=0;
	virtual void attack1()=0;
	virtual void attack2()=0;
	virtual void attack3()=0;
	virtual void attack4()=0;

	//
	std::string getname();

	//constructors

	//death check function and destructor
	bool dead();
	void takedmg(int dmg, int incomingatktype, bool isincomingmagic);
	int check_hp();

	int gethpstat();
	int getatkstat();
	int getdefstat();
	int getspdstat();

	int getcurrenthp();
	int getcurrentatk();
	int getcurrentdef();
	int getcurrentspd();

	void changename(std::string newname);
	void changehpstat(int newhp);
	void changeatkstat(int newatk);
	void changedefstat(int newdef);
	void changespdstat(int newspd);

};

#endif //GAMEOBJECT_H