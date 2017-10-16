#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>

class gameobject{
public:
	
	//state variables
	std::string name;
	int hp;
	int atk;
	int def;
	int spd;
	bool isdead=false;

	int getcurrenthp();
	int getcurrentatk();
	int getcurrentdef();
	int getcurrentspd();
	virtual std::string getname();
	
	void changename(std::string newname);
	void changehpstat(int newhp);
	void changeatkstat(int newatk);
	void changedefstat(int newdef);
	void changespdstat(int newspd);
	
	//attack functions
	virtual void basicattack()=0;
	virtual void attack1()=0;
	virtual void attack2()=0;
	virtual void attack3()=0;
	virtual void attack4()=0;

	//death check function
	bool dead();
	void takedmg(int dmg, int incomingatktype, bool isincomingmagic);
	int check_hp();

};

#endif //GAMEOBJECT_H