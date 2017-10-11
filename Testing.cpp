/* test cases
Test 1 - test for invalid attack options
Test 2 - test for change of variables
Test 3 - test for 'death'
Test 4 - test for randomness of enemy attacks */

//Test 1
int main(){

game newgame = game();

player user = player("Harry", 50,40,20,40);

enemy enemy1 = enemy();

enemy1.changename("Monster");

user.changename("Larry");

std::cout<< enemy1.getname() << user.getname() << std::endl;

}

//Test 2
int main(){

game newgame = game();

player user = player("Harry", 50,40,20,40);

enemy enemy1 = enemy();

player.changeatkstat(30);
player.changespdstat(20);
player.changedefstat(50);

}

//Test 3

int main(){
game newgame = game();

player user = player("Harry", 50,40,20,40);

enemy enemy1 = enemy();
enemy enemy2 = enemy();
enemy enemy3 = enemy();
enemy1.changename("MonsterA");
enemy2.changename("MonsterB");
enemy3.changename("MonsterC");

battle firstbattle(player user, enemy enemy1, enemy enemy2, enemy enemy3);

//this is too check that the enemies die properly and then change of enemy
// how would we check the results? Run the code, kill the first enemy; does it die? if yes does the code proceed to the next
// enemy in the list? does the battle end when all enemies in the array are dead? 
}
