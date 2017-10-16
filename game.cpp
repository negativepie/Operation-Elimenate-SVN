#include "game.h"
#include "gameobject.h"
#include "player.h"
#include "wizard.h"
#include "fighter.h"
#include <string>
#include <iostream>

game::game(){
	
}


void game::game_state(int selection){
	
	if(selection == 1){
		std::cout << "Welcome to ..." << std::endl << std::endl;
	}
	if(selection == 2){
		std::cout << "Please enter your name" << std::endl;
	
		std::cin >> your_name;
	
		std::cout << "Please enter a number to determine your character type:" << std::endl;
		std::cout << "1 - Wizard" << std::endl << "2 - Fighter" <<std::endl<< "... and so on" << std::endl; //whatever other types we might want if we have time
	
		//int charac_type; 
	
		//std::cin >> charac_type;	
	}
	if(selection == 3){
		std::cout << "YOU DIED" << std::endl;
	}
	// we have four variables that are unused and I don't know where we might use them with the current setup for the game
	
}

player game::character_type(int num){
	if(num=1){
		wizard user1 = wizard(your_name);
		return user1;
	}
	if(num=2){
		fighter user2 = fighter(your_name);
		return user2;
	}
	
}

std::string game::getname(){
	return your_name;
}