
#include <iostream>
#include <string>
#include <vector>

#include "CharacterClass.h"
#include "Goblin.h"

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{


	cout << "Hello and welcome!" << endl;
	cout << "Here are your stats before you go on your adventure" << endl;

	CharacterClass randomAdventurer;
	randomAdventurer.DisplayInfo();

	Goblin goblin;




	

	vector<string>MyInventory{ "Knife", "Wand" };
	vector<string>goblinInventory{ "Rusty Dagger" };

	CharacterClass MyCharacter("Player", 2, 3, 30, 30, MyInventory);

	cout << "Choose Your Power" << endl;


	int PowerInput;
	cin >> PowerInput;
	MyCharacter.SetSuperPowerFromInput(PowerInput);



	Goblin MyGoblin("Goblin",2,2, 20, 10, goblinInventory);

	goblin.DisplayInfo();

}

