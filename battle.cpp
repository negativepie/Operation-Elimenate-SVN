#include <iostream>
#include "battle.h"

battle::battle(){
	//be careful, think about what might happen if you construct and empty battle array with nothing in it. Remember to take precautions with this (later on though because too lazy).
}

battle::battle(player user, enemy enemy1){
	battlearray[0]=user;
	battlearray[1]=enemy1;
}

void battle::chooseatk(){
	std::cout << "which attack would you like to use?" << std::endl;

	while(ischoosing=true){
		std::cin >> atknumber;

		if(atknumber>4){
			std::cout << "you only have a basic attack (0) and 4 special attacks (1-4) at the moment, please choose a number between 1-4 for your basic attack" << std::endl;
		}

		if(atknumber=0){ //could use an attack array here to speed things up
			ischoosing=false;
			battlearray[0].basicattack();
			break;
		}

		if(atknumber=1){
			ischoosing=false;
			battlearray[0].attack1();
			break;
		}

		if(atknumber=2){
			ischoosing=false;
			battlearray[0].attack2();
			break;
		}

		if(atknumber=3){
			ischoosing=false;
			battlearray[0].attack3();
			break;
		}

		if(atknumber=4){
			ischoosing=false;
			battlearray[0].attack4();
			break;
		}
	}
}