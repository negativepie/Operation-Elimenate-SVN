#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "gameobject.h"

class player :public gameobject{
public:

	//
	//state variables
	//

	//constant state variables
	std::string name;

	//battle variables
	/* int hp;
	int atk;
	int def;
	int spd;
	bool isdead=0; */

	//
	//functions
	//

	//constructors
	player();
	player(std::string initialname, int initialhp, int initialatk, int initialdef, int initialspd);
	
	//getter functions
	/*virtual*/ std::string getname();

	int getcurrenthp();
	int getcurrentatk();
	int getcurrentdef();
	int getcurrentspd();

	//setter functions
	void changename(std::string newname);
	void changehpstat(int newhp);
	void changeatkstat(int newatk);
	void changedefstat(int newdef);
	void changespdstat(int newspd);

	//attack functions
	/* virtual void basicattack();
	virtual void attack1();
	virtual void attack2();
	virtual void attack3();
	virtual void attack4(); */

	//destructor
	~player();

};

#endif //PLAYER_H