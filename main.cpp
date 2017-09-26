#include "game.h"
#include "player.h"

int main(){
	game newgame = game();
	newgame.gameIntro();
	player reimu = player("Reimu Hakurei",69,420,8008135,15);
	std::cout << "The name of your player is " << reimu.getname() << std::endl;
	reimu.changename("Marisa Kirisame");
	std::cout << "The name of your player is now " << reimu.getname() << std::endl;
	
	return 0;
	
}