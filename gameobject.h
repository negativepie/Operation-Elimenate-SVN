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
	int spdefstat;
	int spatkstat;
	

	//battle variables
	int hp;
	int atk;
	int def;
	int spd;
	int spdef;
	int spatk;
	
	int type=0;
	int atktype;
	bool ismagic;
	int dmgout;

	//sounds
	std::string cry;
	std::string death_cry;

	//sound functions
	void set_cry(std::string sound);
	void set_death_cry(std::string sound);

	virtual void get_cry();
	virtual void get_death_cry(); 

	
	//attack functions
	virtual void basicattack()=0;
	virtual void attack1()=0;
	virtual void attack2()=0;
	virtual void attack3()=0;
	virtual void attack4()=0;

	
	//constructors
	gameobject();

	//death checking and damage
	bool dead();
	void takedmg(int dmg, int incomingatktype, bool isincomingmagic);
	int check_hp();

	void postbattlestatcheck();
	void checkhpover();

	int dmgoutput();
	int atktypeoutput();
	bool magicoutput();


	std::string getname();
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

	//destructor
	~gameobject();

};

#endif //GAMEOBJECT_H