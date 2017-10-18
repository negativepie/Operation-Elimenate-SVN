#include "gameobject.h"
#include <iostream>
#include <string>
#include <math.h>

gameobject::gameobject(){
	//default values
	name="missingname";

	hpstat=500;
	atkstat=1;
	defstat=1;
	spdefstat=1;
	spatkstat=1;
	cry="missing cry";
	death_cry="missing death cry";

	hp=hpstat;
	atk=atkstat;
	def=defstat;
	spdef=spdefstat;
	spatk=spatkstat;
}

void gameobject::set_cry(std::string sound){
	cry=sound;
}

void gameobject::set_death_cry(std::string sound){
	death_cry=sound;
}

 std::string gameobject::get_cry(){
 	return cry;
 }

 std::string gameobject::get_death_cry(){
 	return death_cry;
 }


bool gameobject::dead(){
	if(hp<=0){
		return true;
	} else {
		return false;
	}
	
}

void gameobject::takedmg(int dmg, bool isincomingmagic){
	if(isincomingmagic==true){
		dmg=dmg+ceil(dmg/spdef);
	}

	else{
		dmg=dmg+ceil(dmg/def);
	}

	hp=hp-dmg;

	if(hp<0){
		hp=0;
	}

	if(hp>hpstat){
		hp=hpstat;
	}
}

int gameobject::dmgoutput(){
	if(ismagic==true){
		return dmgout+spatk;
	}

	else{
		return dmgout+atk;
	}
}

bool gameobject::magicoutput(){
	return ismagic;
}

void gameobject::basicattack(){

}

void gameobject::attack1(){

}

void gameobject::attack2(){

}

void gameobject::attack3(){

}

void gameobject::attack4(){

}

void gameobject::levelup(){
	
}


void gameobject::checkhpover(){
	if(hp>hpstat){
		hp=hpstat;
	}
}

void gameobject::postbattlestatcheck(){

	if(atk>atkstat){
		atk=atkstat;
	}

	if(def>defstat){
		def=defstat;
	}

	if(spdef>spdefstat){
		spdef=spdefstat;
	}

	if(spatk>spatkstat){
		spatk=spatkstat;
	}
}


int gameobject::check_hp(){
	return hp;
}

std::string gameobject::getname(){
	return name;
}

int gameobject::gethpstat(){
	return hpstat;
}

int gameobject::getatkstat(){
	return atkstat;
}

int gameobject::getdefstat(){
	return defstat;
}



int gameobject::getcurrenthp(){
	return hp;
}

int gameobject::getcurrentatk(){
	return atk;
}

int gameobject::getcurrentdef(){
	return def;
}



void gameobject::changename(std::string newname){
	name=newname;
}

void gameobject::changehpstat(int newhp){
	hpstat=newhp;
}

void gameobject::changeatkstat(int newatk){
	atkstat=newatk;
}

void gameobject::changedefstat(int newdef){
	defstat=newdef;
}


gameobject::~gameobject(){

}