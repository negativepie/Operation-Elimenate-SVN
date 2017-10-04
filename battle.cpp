#include <iostream>
#include "battle.h"

battle::battle(){
	//be careful, think about what might happen if you construct and empty battle array with nothing in it. Remember to take precautions with this (later on though because too lazy).
}

battle::battle(player user, enemy enemy1){
	battlearray=new gameobject[2];
	battlearray[0]=user;
	battlearray[1]=enemy1;
	currentturn=0;
	currentlyattacking=0;
	participants=2;
}

void battle::battleturn(){
	currentturn++;
	currentlyattacking=currentturn%(participants-1);
	std::cout << currentturn << std::endl;
}

void battle::chooseatk(){
	std::cout << "which attack would you like to use?" << std::endl;

	while(ischoosing==true){
		std::cin >> atknumber;

		if(atknumber>4){
			std::cout << "you only have a basic attack (0) and 4 special attacks (1-4) at the moment, please choose a number between 1-4 for your basic attack" << std::endl;
		}

		if(atknumber==0){ //could use an attack array here to speed things up
			ischoosing=false;
			battlearray[1].takedmg(0);
			battlearray[0].basicattack();
			std::cout<<"Enemy 1 has  "<<battlearray[1].check_hp()<<"  hp"<<std::endl;
			ischoosing=true;
		}

		if(atknumber==1){
			ischoosing=false;
			battlearray[1].takedmg(1);
			battlearray[0].attack1();
			std::cout<<"Enemy 1 has  "<<battlearray[1].check_hp()<<"  hp"<<std::endl;
			ischoosing=true;
		}

		if(atknumber==2){
			ischoosing=false;
			battlearray[1].takedmg(2);
			battlearray[0].attack2();
			std::cout<<"Enemy 1 has  "<<battlearray[1].check_hp()<<"  hp"<<std::endl;
			ischoosing=true;
		}

		if(atknumber==3){
			ischoosing=false;
			battlearray[1].takedmg(3);
			battlearray[0].attack3();
			std::cout<<"Enemy 1 has  "<<battlearray[1].check_hp()<<"  hp"<<std::endl;
			ischoosing=true;
		}

		if(atknumber==4){
			ischoosing=false;
			battlearray[1].takedmg(4);
			battlearray[0].attack4();
			std::cout<<"Enemy 1 has  "<<battlearray[1].check_hp()<<"  hp"<<std::endl;
			ischoosing=true;
		}
	}
	//battleturn();
}

/*
Test cases for attacking and taking damage

Run game and go through attacks 0-4. Enemy is taking damage accordingly. 
Type in any other number and it gives the error string. 

*/