#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "gameobject.h"

class player :public gameobject{
public:

	//
	//functions
	//

	//constructors
	player();
	player(std::string initialname, int initialhp, int initialatk, int initialdef, int initialspd);

	//getter functions
	/*virtual*/ std::string getname();
	int gethpstat();
	int getatkstat();
	int getdefstat();
	int getspdstat();

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
	void basicattack();
	void attack1();
	void attack2();
	void attack3();
	void attack4();

	//destructor
	~player();

};

#endif //PLAYER_H