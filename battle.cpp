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

battle::battle(game* gameinput){ //just pass through pointers
	participants=0;
	battlearray=new gameobject*[participants];
	int random_weather=rand()%5; 
	weather=random_weather;
	
	gamestate=gameinput;
}

void battle::battlestart(){
	which_enemy=1;
	currentturn=0;
	currentlyattacking=0;
	ischoosing=true;

	menu_choosing=true;

	menu();
}

void battle::addgameobject(gameobject *object){
	participants++;
	gameobject **temparray=new gameobject*[participants];
		for(int i=0;i<participants-1;i++){
			temparray[i]=battlearray[i];
			
		}
		delete[]battlearray;
		battlearray=temparray;
		battlearray[participants-1]=object;
}

void battle::menu(){
	std::cout<<"Welcome to Touhou Text RPG!"<<std::endl<<std::endl;
	std::cout<<"Enter 1 to start"<<std::endl;
	std::cout<<"Enter 2 for help"<<std::endl;
	std::cout<<"Enter 3 for lore"<<std::endl;
	std::cout<<"Enter 4 for credits"<<std::endl;

	while(menu_choosing==true){
		std::cin>> menu_status;

			if(menu_status=="1"){
					std::cout<<" "<<std::endl;
					std::cout << battlearray[0]->getname() << " you are now in a battle with a " << battlearray[which_enemy]->getname() << std::endl;
					std::cout << "Basic Attack:1, Special Attacks: 2-5, Weather Stick:6"<<std::endl;
					std::cout <<" "<<std::endl;

					std::cout<<battlearray[1]->getname() << " lunges foward." <<std::endl;
					std::cout<< battlearray[1]->get_cry()<<std::endl<<std::endl;
				    next_turn();
			}
			if(menu_status=="2"){
				std::cout<<"You need to defeat all the enemies to win. You have 5 attacks to choose from."<<std::endl;
				std::cout<<"1-Basic Attack"<<std::endl;
				std::cout<<"2-Supersonic Elemental Drill!"<<std::endl;
				std::cout<<"3-Demon Sealing Prayer: Holy Life Steal!"<<std::endl;
				std::cout<<"4-Max Power Bullet Barrage"<<std::endl;
				std::cout<<"5-Eastern Spell of the Gensokyo Magical Girls: Bullet Hell!"<<std::endl;
				std::cout<<"6-Weather Stick (utility move)"<<std::endl;
				std::cout<<" "<<std::endl;
				std::cout<<"Reimu gets stronger by absorbing the souls of defeated foes. Vanquish the elemental lords so that she can take down the final boss"<<std::endl;
				std::cout<<" "<<std::endl;
				std::cout<<"Watch out for the weather, especially sandstorm and hail!"<<std::endl;
				std::cout<<"You can use your weather stick to change the weather. Be careful, it's still a prototype!"<<std::endl;
				std::cout<<" "<<std::endl; 
			}
			if(menu_status=="3"){
				std::cout<<"Reimu is a magical girl fighting evil monsters trying to take over the Earth."<<std::endl;
				std::cout<<"Defeat them all and restore peace to the world!"<<std::endl;
			}
			if(menu_status=="4"){
				std::cout<<"This game was proudly brought to to you by Negativepie,Noramia and Kate98!"<<std::endl;
			}
	}
}

void menuflip(){

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

			if(atknumber=="1"){

				ischoosing=false;
				battlearray[which_enemy]->takedmg(battlearray[0]->dmgoutput(),battlearray[0]->magicoutput());
				battlearray[0]->basicattack();
				std::cout<< battlearray[which_enemy]->getname() <<" has  "<<battlearray[which_enemy]->check_hp()<<"  hp"<<std::endl;
			}

			else if(atknumber=="2"){
				ischoosing=false;
				battlearray[which_enemy]->takedmg(battlearray[0]->dmgoutput(),battlearray[0]->magicoutput());
				battlearray[0]->attack1();
				std::cout<< battlearray[which_enemy]->getname() <<" has  "<<battlearray[which_enemy]->check_hp()<<"  hp"<<std::endl;
			}

			else if(atknumber=="3"){
				ischoosing=false;
				battlearray[which_enemy]->takedmg(battlearray[0]->dmgoutput(),battlearray[0]->magicoutput());
				battlearray[0]->attack2();
				std::cout<< battlearray[which_enemy]->getname() <<" has  "<<battlearray[which_enemy]->check_hp()<<"  hp"<<std::endl;
			}

			else if(atknumber=="4"){
				ischoosing=false;
				battlearray[which_enemy]->takedmg(battlearray[0]->dmgoutput(),battlearray[0]->magicoutput());
				battlearray[0]->attack3();
				std::cout<< battlearray[which_enemy]->getname() <<" has  "<<battlearray[which_enemy]->check_hp()<<"  hp"<<std::endl;
			}

			else if(atknumber=="5"){
				ischoosing=false;
				battlearray[which_enemy]->takedmg(battlearray[0]->dmgoutput(),battlearray[0]->magicoutput());
				battlearray[0]->attack4();
				std::cout << battlearray[which_enemy]->getname() << "  has  "<<battlearray[which_enemy]->check_hp()<<"  hp"<<std::endl;

			}
			else if(atknumber=="6"){
				std::cout<<"Go Weather Stick!"<<std::endl; 
				ischoosing=false;
				weather_stick=rand()%5;
				std::cout<<"Weather Stick value is "<<weather_stick<<std::endl; 
				switch(weather_stick){
					case 0:
					weather=sandstorm;
					std::cout<<"Weather Stick glowed yellow."<<std::endl;
					std::cout<<"Weather Stick summoned a sandstorm."<<std::endl;
					break;

					case 1:
					weather=hail;
					std::cout<<"Weather Stick glowed white."<<std::endl; 
					std::cout<<"Weather Stick summoned hail."<<std::endl; 
					break;

					case 2:
					weather=sun;
					std::cout<<"Weather Stick glowed red"<<std::endl;
					std::cout<<"Weather Stick summoned a sunny day."<<std::endl;
					break;

					case 3:
					weather=hurricane;
					std::cout<<"Weather Stick glowed green."<<std::endl;
					std::cout<<"Weather Stick brought forth a hurricane."<<std::endl;
					break;

					case 4:
					weather=rain;
					std::cout<<"Weather Stick glowed dark blue."<<std::endl; 
					std::cout<<"Weather Stick summoned a deluge."<<std::endl; 
					break;
				}
			}

			else{
				std::cout << "you only have a basic attack (1),special attacks (2-5) and weather stick (6) at the moment, please choose a number between 1-6 for your basic attack" << std::endl;
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
				battlearray[0]->takedmg(battlearray[which_enemy]->dmgoutput(),battlearray[which_enemy]->magicoutput());
				std::cout<< battlearray[0]->getname() <<" has  "<<battlearray[0]->check_hp()<<"  hp"<<std::endl<<std::endl;
			}

			if(random==1){
				battlearray[which_enemy]->attack1();
				battlearray[0]->takedmg(battlearray[which_enemy]->dmgoutput(),battlearray[which_enemy]->magicoutput());
				std::cout<< battlearray[0]->getname() <<" has  "<<battlearray[0]->check_hp()<<"  hp"<<std::endl<<std::endl;
			}

			if(random==2){
				battlearray[which_enemy]->attack2();
				battlearray[0]->takedmg(battlearray[which_enemy]->dmgoutput(),battlearray[which_enemy]->magicoutput());
				std::cout<< battlearray[0]->getname() <<" has  "<<battlearray[0]->check_hp()<<"  hp"<<std::endl<<std::endl;
			}

			if(random==3){
				battlearray[which_enemy]->attack3();
				battlearray[0]->takedmg(battlearray[which_enemy]->dmgoutput(),battlearray[which_enemy]->magicoutput());
				std::cout<< battlearray[0]->getname() <<" has  "<<battlearray[0]->check_hp()<<"  hp"<<std::endl<<std::endl;
			}

			if(random==4){
				battlearray[which_enemy]->attack4();
				battlearray[0]->takedmg(battlearray[which_enemy]->dmgoutput(),battlearray[which_enemy]->magicoutput());
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
		std::cout << battlearray[which_enemy]->getname() << " has been slain" << std::endl;

		switch(which_enemy){ //going to turn this into a switch statement

		case 1:
		std::cout<<battlearray[0]->getname()<<" has leveled up to level 2!"<<std::endl;
		battlearray[0]->levelup();
		std::cout<<battlearray[0]->getname()<<" has been promoted to an apprentice magician!"<<std::endl<<std::endl;
        break;

		case 2:
		std::cout<<battlearray[0]->getname()<<" has leveled up to level 3!"<<std::endl;
		battlearray[0]->levelup();
		std::cout<<battlearray[0]->getname()<<" has been promoted to a graduate magician!"<<std::endl<<std::endl;
		break;

		case 3:
		std::cout<<battlearray[0]->getname()<<" has leveled up to level 4!"<<std::endl;
		battlearray[0]->levelup();
		std::cout<<battlearray[0]->getname()<<" has been promoted to a master magician!"<<std::endl<<std::endl;
		break;
		}


		which_enemy++;
		
		if(which_enemy<participants){
		std::cout<<battlearray[0]->getname() << " you are now in a battle with a " << battlearray[which_enemy]->getname() << std::endl;
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
		battlearray[0]->takedmg(1,false);
		std::cout<< battlearray[0]->getname() << " has " << battlearray[0]->check_hp()<<std::endl;
		std::cout<< battlearray[which_enemy]->getname() << " was hit by sandstorm" <<std::endl;
		battlearray[which_enemy]->takedmg(1,false);
		std::cout<< battlearray[which_enemy]->getname() << " has " << battlearray[which_enemy]->check_hp()<<" hp left"<< std::endl;
		std::cout<<" "<<std::endl;
	}
	else if(weather==hail){
		std::cout<<" "<<std::endl;
		std::cout<< "It is hailing" <<std::endl;
		std::cout<< battlearray[0]->getname() << " was struck by hail" <<std::endl;
		battlearray[0]->takedmg(1,false);
		std::cout<< battlearray[0]->getname() << " has " << battlearray[0]->check_hp()<<std::endl;
		std::cout<< battlearray[which_enemy]->getname() << " was struck by hail" <<std::endl;
		battlearray[which_enemy]->takedmg(1,false);
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
