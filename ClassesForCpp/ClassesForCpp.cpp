
#include <iostream>
#include <string>
#include <vector>

#include "CharacterClass.h"

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{


	CharacterClass RandomAdventurer;
	RandomAdventurer.DisplayInfo();

	

	string AdventurerName;

	cout << "Set Name: " << endl;
	cin >> AdventurerName;

	vector<string>MyInventory{ "Knife", "Wand" };

	CharacterClass MyCharacter(AdventurerName, 30, 30, MyInventory);

	cout << "Choose Your Power" << endl;


	int PowerInput;
	cin >> PowerInput;
	MyCharacter.SetSuperPowerFromInput(PowerInput);

}

