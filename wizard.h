#include "player.h"

#ifndef WIZARD_H
#define WIZARD_H

class wizard: public player{
public :	
		
	wizard(std::string initialname, int initialhp, int initialatk, int initialdef, int initialspd);
	
	void basicattack();
	void attack1();
	void attack2();
	void attack3();
	void attack4();
	
	~wizard();
};
#endif //WIZARD_H