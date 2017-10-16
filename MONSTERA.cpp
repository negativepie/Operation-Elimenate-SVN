#include "MONSTERA.h"
#include <string>
#include <iostream>

MONSTERA::MONSTERA(){
	name = "Pikachu";
	hp = 50;
	atk = 2;
	def = 4;
	spd = 6;
}

//these attacks aren't being implemented
void MONSTERA::basicattack(){
	std::cout << "Tackle!"<< std::endl;
}

void MONSTERA::attack1(){
	std::cout << "Thunder!" << std::endl;
}

void MONSTERA::attack2(){
	std::cout << "Volt Tackle!" << std::endl;
//	dmg = atkstat - //defstat;
}

void MONSTERA::attack3(){
	std::cout << "Quick Attack!" << std::endl;
//	dmg = atkstat - //defstat;
}

void MONSTERA::attack4(){
	std::cout << "Iron Tail!" << std::endl;
//	dmg = atkstat - //defstat;
}

