#include <string>
#include "gameobject.h"
#include "enemy.h"

// each class of monster will have a different skill set, so the attack names
// will be different and the damage. 
// basic attack could be the same for all, do one or none damage
// the number of special and regular attacks could be different for each
// type of monster too.
// with attacks what about if the defense is larger than the attack?
// what do we do with negative damage? set it too zero? or recalibrate? 

#ifndef MONSTERA_H   // the enemy name needs work. Are we going to make up
#define MONSTERA_H   // some names or just use existing names

class monsterA : public enemy{
	
	// should also redefine the stats here based on enemy type.
	
	basicattack();
	attack1();
	attack2();
	attack3();
	attack4();
		
};
#endif //MONSTERA_H
