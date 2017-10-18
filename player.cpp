#include "player.h"
#include <string>
#include <iostream>

player::player(){
	name="Reimu Harukei";

	hpstat=750;
	atkstat=65;
	spatkstat=80;
	defstat=50;
	spdefstat=55;

	hp=hpstat;
	atk=atkstat;
	spatk=spatkstat;
	def=defstat;
	spdef=spdefstat;
}

player::player(std::string initialname, int initialhp, int initialatk, int initialspatk, int initialspdef, int initialdef){
	name=initialname;

	hpstat=initialhp;
	atkstat=initialatk;
	spatkstat=initialspatk;
	defstat=initialdef;
	spdefstat=initialspdef;

	hp=hpstat;
	atk=atkstat;
	spatk=spatkstat;
	def=defstat;
	spdef=spdefstat;
}

void player::basicattack(){
	ismagic=false;
	dmgout=5;
	std::cout<<name<<" Attacks with a basic attack!"<<std::endl<<std::endl;
}

void player::attack1(){
	ismagic=false;
	dmgout=15;
	std::cout<<name<<" Used Supersonic Elemental Drill!"<<std::endl<<std::endl;
}

void player::attack2(){
	ismagic=true;
	dmgout=15;

	hp=hp+100+rand()%150;

	checkhpover();

	std::cout<<name<<" Used Demon Sealing Prayer: Holy Life Steal!"<<std::endl<<std::endl;
}

void player::attack3(){
	ismagic=true;
	dmgout=35;
	std::cout<<name<<" Used Max Power Bullet Barrage!"<<std::endl<<std::endl;
	atk=atk+5;
}

void player::attack4(){
	ismagic=true;
	dmgout=100+rand()%76;
	std::cout<<name<<" Used Eastern Spell of the Gensokyo Magical Girls: Bullet Hell!"<<std::endl<<std::endl;
}

void player::levelup(){
	spatk=spatk+10;
	atk=atk+10;
	def=def+15;
	spdef=spdef+15;

	spatkstat=spatkstat+10;
	atkstat=atkstat+10;
	defstat=defstat+15;
	spdefstat=spdefstat+15;

	hpstat=hpstat+130;
	hp=hpstat;

	std::cout<<" "<<std::endl;
	std::cout<<"The vanquished enemy soul strengthens your magic." <<std::endl;
	std::cout<<"Your HP has been replenished"<<std::endl<<std::endl;
}

player::~player(){

}
