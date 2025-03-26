#include "CharacterClass.h"
#pragma once

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::rand;


CharacterClass::CharacterClass() :
	cName{"Player"},
	cMaxHealth(20),
	cMaxMana(20),
	cHealth(5),
	cMana(12)
{
	
	


}

CharacterClass::CharacterClass(string name, int health, int mana, int maxHealth, int maxMana, vector<string>inventory):
	cName{ name },
	cMaxHealth{ maxHealth },
	cMaxMana{ maxMana },
	cInventory{ inventory },
	cMana{mana},
	cHealth{health}
{




}

void CharacterClass::SetName(string name)
{
	cName = adventurerName;
	
}

string CharacterClass::GetName() const
{
	return 	adventurerName;
	
}


void CharacterClass::DiceRoll()
{
	srand(time(NULL));
	int DiceNumber;

	DiceNumber = (rand() % 6) + 1;

}

void CharacterClass::DisplayInfo()
{

	cout << "Stats for: " << cName << endl;
	cout << "Your Health is " << cHealth << "/" << cMaxHealth << endl;
	cout << "Your Mana is " << cMana << "/" << cMaxHealth << endl;



}
//
//string CharacterClass::SuperPowerChooser() const
//{
//
//
//
//	return GetSuperPowerName(SuperPower);
//}


bool CharacterClass::SetSuperPowerFromInput(int Input)
{
	if (Input < 1 || Input > 4)
	{

		cout << "Wrong Choice" << endl;


		return false;
	}

	else {

		SuperPower = static_cast<MySuperPowerEnumClass>(Input);

		cout << "You chose: " << GetSuperPowerName(SuperPower) << endl;

		return true;
	}

}

string CharacterClass::GetSuperPowerName(MySuperPowerEnumClass SuperPower)
{
	switch (SuperPower)
	{
	case MySuperPowerEnumClass::Fire:
		return "Fire";

	case MySuperPowerEnumClass::Water:
		return "Water";

	case MySuperPowerEnumClass::Ice:
		return "Ice";

	case MySuperPowerEnumClass::Air:
		return "Air";

	default:

		return "Air";


	}
}





//void CharacterClass::InventoryList()
//{
//	cout <<
//
//}
//
//void CharacterClass::AddToInventory(string item)
//{
//
//
//}

