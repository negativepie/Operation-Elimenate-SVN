#include <iostream>
#include <string>
#include <stdlib.h>
#include "battle.h"
#include "game.h"

	int hurricane=0;
	int sandstorm=1;
	int rain=2;
	int hail=3;
	int sun=4;
	


battle::battle(){
}

battle::battle(player user, boss enemy1,enemy enemy2, enemy enemy3, game* gameinput){ //just pass through pointers
	
	battlearray=new gameobject*[4];
	battlearray[0]=&user;
	battlearray[1]=&enemy1;
	battlearray[2]=&enemy2;
	battlearray[3]=&enemy3;
	
	
	int random_weather=std::rand()%5;
	weather=random_weather;
	
	gamestate=gameinput;

	which_enemy=1;
	currentturn=0;
	currentlyattacking=0;
	participants=4;
	ischoosing=true;

	//menu stuff

	std::cout << battlearray[0]->getname() << " you are now in a battle with a " << battlearray[which_enemy]->getname() << std::endl;
	std::cout << "Basic Attack:0, Special Attacks: 1-4"<<std::endl;
	std::cout <<" "<<std::endl;

	std::cout<<battlearray[1]->getname() << "lunges foward." <<std::endl;
	std::cout<< battlearray[1]->get_cry()<<std::endl<<std::endl;
	
	next_turn();
}

void battle::menu(){
	std::cout<<"Welcome to Touhou Text RPG!"<<std::endl<<std::endl;
	std::cout<<"Enter 1 to start"<<std::endl;
	std::cout<<"Enter 2 for help"<<std::endl;
	std::cout<<"Enter 3 for lore"<<std::endl;
	std::cout<<"Enter 4 for credits"<<std::endl;
}

void battle::battleturn(){
	currentturn++;
	currentlyattacking=currentturn%(participants-1);
	std::cout << "current turn is "<< currentturn << std::endl;
}

void battle::chooseatk(){
	
		std::cout << "which attack would you like to use?" << std::endl;

		while(ischoosing==true){
			std::cin >> atknumber;

			if(atknumber=="0"){

				ischoosing=false;
				battlearray[which_enemy]->takedmg(battlearray[0]->dmgoutput(),battlearray[0]->atktypeoutput(),battlearray[0]->magicoutput());
				battlearray[0]->basicattack();
				std::cout<< battlearray[which_enemy]->getname() <<" has  "<<battlearray[which_enemy]->check_hp()<<"  hp"<<std::endl;
			}

			else if(atknumber=="1"){
				ischoosing=false;
				battlearray[which_enemy]->takedmg(battlearray[0]->dmgoutput(),battlearray[0]->atktypeoutput(),battlearray[0]->magicoutput());
				battlearray[0]->attack1();
				std::cout<< battlearray[which_enemy]->getname() <<" has  "<<battlearray[which_enemy]->check_hp()<<"  hp"<<std::endl;
			}

			else if(atknumber=="2"){
				ischoosing=false;
				battlearray[which_enemy]->takedmg(battlearray[0]->dmgoutput(),battlearray[0]->atktypeoutput(),battlearray[0]->magicoutput());
				battlearray[0]->attack2();
				std::cout<< battlearray[which_enemy]->getname() <<" has  "<<battlearray[which_enemy]->check_hp()<<"  hp"<<std::endl;
			}

			else if(atknumber=="3"){
				ischoosing=false;
				battlearray[which_enemy]->takedmg(battlearray[0]->dmgoutput(),battlearray[0]->atktypeoutput(),battlearray[0]->magicoutput());
				battlearray[0]->attack3();
				std::cout<< battlearray[which_enemy]->getname() <<" has  "<<battlearray[which_enemy]->check_hp()<<"  hp"<<std::endl;
			}

			else if(atknumber=="4"){
				ischoosing=false;
				battlearray[which_enemy]->takedmg(battlearray[0]->dmgoutput(),battlearray[0]->atktypeoutput(),battlearray[0]->magicoutput());
				battlearray[0]->attack4();
				std::cout << battlearray[which_enemy]->getname() << "  has  "<<battlearray[which_enemy]->check_hp()<<"  hp"<<std::endl;

			}

			else{
				std::cout << "you only have a basic attack (0) and 4 special attacks (1-4) at the moment, please choose a number between 1-4 for your basic attack" << std::endl;
			}
		}
	enemyatk();
}

void battle::enemyatk(){
	random=rand()%5;
		if(random>4||random<0){
				std::cout << "Enemy attack error" << std::endl;
			}

			if(random==0){
				battlearray[which_enemy]->basicattack();
				battlearray[0]->takedmg(battlearray[which_enemy]->dmgoutput(),battlearray[which_enemy]->atktypeoutput(),battlearray[which_enemy]->magicoutput());
				std::cout<< battlearray[0]->getname() <<" has  "<<battlearray[0]->check_hp()<<"  hp"<<std::endl<<std::endl;
			}

			if(random==1){
				battlearray[which_enemy]->attack1();
				battlearray[0]->takedmg(battlearray[which_enemy]->dmgoutput(),battlearray[which_enemy]->atktypeoutput(),battlearray[which_enemy]->magicoutput());
				std::cout<< battlearray[0]->getname() <<" has  "<<battlearray[0]->check_hp()<<"  hp"<<std::endl<<std::endl;
			}

			if(random==2){
				battlearray[which_enemy]->attack2();
				battlearray[0]->takedmg(battlearray[which_enemy]->dmgoutput(),battlearray[which_enemy]->atktypeoutput(),battlearray[which_enemy]->magicoutput());
				std::cout<< battlearray[0]->getname() <<" has  "<<battlearray[0]->check_hp()<<"  hp"<<std::endl<<std::endl;
			}

			if(random==3){
				battlearray[which_enemy]->attack3();
				battlearray[0]->takedmg(battlearray[which_enemy]->dmgoutput(),battlearray[which_enemy]->atktypeoutput(),battlearray[which_enemy]->magicoutput());
				std::cout<< battlearray[0]->getname() <<" has  "<<battlearray[0]->check_hp()<<"  hp"<<std::endl<<std::endl;
			}

			if(random==4){
				battlearray[which_enemy]->attack4();
				battlearray[0]->takedmg(battlearray[which_enemy]->dmgoutput(),battlearray[which_enemy]->atktypeoutput(),battlearray[which_enemy]->magicoutput());
				std::cout<< battlearray[0]->getname() <<" has  "<<battlearray[0]->check_hp()<<"  hp"<<std::endl<<std::endl;
			}
			ischoosing=true;
			weather_effect();
			next_turn();
}
void battle::next_turn(){
	if(battlearray[0]->dead()==true){
		gamestate->gameOver();
	}

	else if(battlearray[which_enemy]->dead()==false){
		chooseatk();
	} 

	else{
		std::cout << battlearray[which_enemy]->getname() << " has been slain" << std::endl<<std::endl;
		if(which_enemy==1){ //going to turn this into a switch statement
		std::cout<<battlearray[0]->getname()<<" has leveled up"<<std::endl<<std::endl;
		}
		which_enemy++;
		std::cout<<battlearray[0]->getname() << " you are now in a battle with a " << battlearray[which_enemy]->getname() << std::endl;
		if(which_enemy<participants){
		chooseatk();
		}
		else {
		std::cout<<battlearray[0]->getname()<<" you have vanquished all the demons. The world is saved." <<std::endl<<std::endl;
		}
	}
}

void battle::weather_effect(){
	
	if(weather==sandstorm){
		std::cout<<" "<<std::endl;
		std::cout<< "A sandstorm rages" <<std::endl;
		std::cout<< battlearray[0]->getname() << " was hit by sandstorm" <<std::endl;
		battlearray[0]->takedmg(1,0,false);
		std::cout<< battlearray[0]->getname() << " has " << battlearray[0]->check_hp()<<std::endl;
		std::cout<< battlearray[which_enemy]->getname() << " was hit by sandstorm" <<std::endl;
		battlearray[which_enemy]->takedmg(1,0,false);
		std::cout<< battlearray[which_enemy]->getname() << " has " << battlearray[which_enemy]->check_hp()<<" hp left"<< std::endl;
		std::cout<<" "<<std::endl;
	}
	else if(weather==hail){
		std::cout<<" "<<std::endl;
		std::cout<< "It is hailing" <<std::endl;
		std::cout<< battlearray[0]->getname() << " was struck by hail" <<std::endl;
		battlearray[0]->takedmg(1,0,false);
		std::cout<< battlearray[0]->getname() << " has " << battlearray[0]->check_hp()<<std::endl;
		std::cout<< battlearray[which_enemy]->getname() << " was struck by hail" <<std::endl;
		battlearray[which_enemy]->takedmg(1,0,false);
		std::cout<< battlearray[which_enemy]->getname() << " has " << battlearray[which_enemy]->check_hp()<<" hp left"<<std::endl;
		std::cout<<" "<<std::endl;
	}
	else if(weather==sun){
		std::cout<<" "<<std::endl;
		std::cout<< "The sun shines brightly" <<std::endl;
		std::cout<<" "<<std::endl;
	}
	else if(weather==rain){
		std::cout<<" "<<std::endl;
		std::cout<< "It is raining heavily" <<std::endl;
		std::cout<<" "<<std::endl;
	}
	else if(weather==hurricane){
		std::cout<<" "<<std::endl;
		std::cout<<"A fierce wind blows"<<std::endl;
		std::cout<<" "<<std::endl;
	}
	else{
		std::cout<<" "<<std::endl;
		std::cout<<"weather error"<<std::endl;
		std::cout<<" "<<std::endl;
	}
}

battle::~battle(){
	delete[] battlearray;
}


/*
Test cases for attacking and taking damage

Run game and go through attacks 0-4. Enemy is taking damage accordingly. 
Type in any other number and it gives the error string. 

*/
