#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class player{
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

	//constructors
	player();
	player(std::string initialname, int initialhp, int initialatk, int initialdef, int initialspd);

	//getter functions
	std::string getname();
	void gethpstat();
	void getatkstat();
	void getdefstat();
	void getspdstat();

	void getcurrenthp();
	void getcurrentatk();
	void getcurrentdef();
	void getcurrentspd();

	//setter functions
	void changename(std::string newname);
	void changehpstat(int newhp);
	void changeatkstat(int newatk);
	void changedefstat(int newdef);
	void changespdstat(int newspd);
	~player();

};

#endif //PLAYER_H