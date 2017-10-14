#include <iostream>
#include <string>
#include <stdlib.h>
#include "battle.h"
#include "game.h"

//int sandstorm=1;


battle::battle(){
	//be careful, think about what might happen if you construct and empty battle array with nothing in it. Remember to take precautions with this (later on though because too lazy).
}

battle::battle(player user, enemy enemy1,enemy enemy2, enemy enemy3, game* gameinput){
	
	battlearray=new gameobject*[4];
	battlearray[0]=&user;
	battlearray[1]=&enemy1;
	battlearray[2]=&enemy2;
	battlearray[3]=&enemy3;

	//int sandstorm=1;
	//int rain=2;
	//int hail=3;
	//int sun=4;

	//int random2=rand()%5;
	weather=1;

	gamestate=gameinput;
	ischoosing = true;

	which_enemy=1;
	currentturn=0;
	currentlyattacking=0;
	participants=4;
	std::cout << battlearray[0]->getname() << " you are now in a battle with a " << battlearray[which_enemy]->getname() << std::endl;
	
	next_turn();
}

void battle::battleturn(){
	currentturn++;
	currentlyattacking=currentturn%(participants-1);
	std::cout << currentturn << std::endl;
	//if(battlearray[1].dead()==false){
	//	enemyatk();
	//}
}

void battle::chooseatk(){
	
		std::cout << "which attack would you like to use?" << std::endl;

		while(ischoosing==true){
			std::cin >> atknumber;

			if(atknumber=="0"){ //could use an attack array here to speed things up
				ischoosing=false;
				battlearray[which_enemy]->takedmg(0);
				battlearray[0]->basicattack();
				std::cout<< battlearray[which_enemy]->getname() <<" has  "<<battlearray[which_enemy]->check_hp()<<"  hp"<<std::endl;
				//ischoosing=true;
			}

			else if(atknumber=="1"){
				ischoosing=false;
				battlearray[which_enemy]->takedmg(1);
				battlearray[0]->attack1();
				std::cout<< battlearray[which_enemy]->getname() <<" has  "<<battlearray[which_enemy]->check_hp()<<"  hp"<<std::endl;
				//ischoosing=true;
			}

			else if(atknumber=="2"){
				ischoosing=false;
				battlearray[which_enemy]->takedmg(2);
				battlearray[0]->attack2();
				std::cout<< battlearray[which_enemy]->getname() <<" has  "<<battlearray[which_enemy]->check_hp()<<"  hp"<<std::endl;
				//ischoosing=true;
			}

			else if(atknumber=="3"){
				ischoosing=false;
				battlearray[which_enemy]->takedmg(3);
				battlearray[0]->attack3();
				std::cout<< battlearray[which_enemy]->getname() <<" has  "<<battlearray[which_enemy]->check_hp()<<"  hp"<<std::endl;
				//ischoosing=true;
			}

			else if(atknumber=="4"){
				ischoosing=false;
				battlearray[which_enemy]->takedmg(4);
				battlearray[0]->attack4();
				std::cout << battlearray[which_enemy]->getname() << "  has  "<<battlearray[which_enemy]->check_hp()<<"  hp"<<std::endl;
				//ischoosing=true;
			}

			else{
				std::cout << "you only have a basic attack (0) and 4 special attacks (1-4) at the moment, please choose a number between 1-4 for your basic attack" << std::endl;
			}
		}
	battleturn();
	enemyatk();
}

void battle::enemyatk(){
	random=rand()%5;
		if(random>4||random<0){
				std::cout << "Enemy attack error" << std::endl;
			}

			if(random==0){
				battlearray[which_enemy]->basicattack();
				battlearray[0]->takedmg(0);
				std::cout<< battlearray[0]->getname() <<" has  "<<battlearray[0]->check_hp()<<"  hp"<<std::endl;
			}

			if(random==1){
				battlearray[which_enemy]->attack1();
				battlearray[0]->takedmg(1);
				std::cout<< battlearray[0]->getname() <<" has  "<<battlearray[0]->check_hp()<<"  hp"<<std::endl;
			}

			if(random==2){
				battlearray[which_enemy]->attack2();
				battlearray[0]->takedmg(2);
				std::cout<< battlearray[0]->getname() <<" has  "<<battlearray[0]->check_hp()<<"  hp"<<std::endl;
			}

			if(random==3){
				battlearray[which_enemy]->attack3();
				battlearray[0]->takedmg(3);
				std::cout<< battlearray[0]->getname() <<" has  "<<battlearray[0]->check_hp()<<"  hp"<<std::endl;
			}

			if(random==4){
				battlearray[which_enemy]->attack4();
				battlearray[0]->takedmg(4);
				std::cout<< battlearray[0]->getname() <<" has  "<<battlearray[0]->check_hp()<<"  hp"<<std::endl;
			}
			ischoosing=true;
			weather_effect();
			next_turn();
}
void battle::next_turn(){
	if(battlearray[0]->dead()==true){
		gamestate->game_state(3); // this isn't working
	}

	else if(battlearray[which_enemy]->dead()==false){
		chooseatk();
	} 

	else{
		which_enemy++;
		if(which_enemy<participants){
		chooseatk();
		}
	}
}

void battle::weather_effect(){
	
	if(weather==1){
		std::cout<< battlearray[0]->getname() << " was hit by sandstorm" <<std::endl;
		battlearray[0]->takedmg(1);
		std::cout<< battlearray[which_enemy]->getname() << " was hit by sandstorm" <<std::endl;
		battlearray[which_enemy]->takedmg(1);
	}
	if(weather==3){
		battlearray[0]->takedmg(3);
		battlearray[which_enemy]->takedmg(3);
	}
}

battle::~battle(){
	//delete[] battlearray;
}


/*
Test cases for attacking and taking damage

Run game and go through attacks 0-4. Enemy is taking damage accordingly. 
Type in any other number and it gives the error string. 

*/
