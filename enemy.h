#ifndef enemy_H
#define enemy_H
#include <string>

class enemy{

public:
	enemy();

	int HP;
	int MP;

	int atk;
	int sp_atk;

	int sp_def;
	int def;
	
	int spd;
	std::string name;

	bool alive;

	set_name(std::string pname);
	check_dead();
	take_dmg(int damage);

  ~enemy();
};

#endif//enemy_H