#include "CharacterClass.h"
#pragma once

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::rand;


CharacterClass::CharacterClass() :
	cName{"ChatGPT  "},
	cMaxHealth(20)
{
	
	cHealth = cMaxHealth;


}

CharacterClass::CharacterClass(string name, int maxHealth, int maxMana, vector<string> inventory):
	cName{ name },
	cMaxHealth{ maxHealth },
	cMaxMana{ maxMana },
	cInventory{ inventory }

{




}

void CharacterClass::SetName(string name)
{
	cName = name;
}

string CharacterClass::GetName() const
{
	return cName;
}


void CharacterClass::DiceRoll()
{
	srand(time(NULL));
	int DiceNumber;

	DiceNumber = (rand() % 6) + 1;

}

void CharacterClass::DisplayInfo()
{

	cout << "Hello" << cName << endl;
	cout << "Your Health is " << cHealth << "/" << cMaxHealth << endl;
	cout << "Your Mana is " << cMana << "/" << cMaxHealth << endl;



}

string GetSuperPowerName(MySuperPowerEnumClass SuperPower)


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



void CharacterClass::InventoryList()
{
	cout <<

}

void CharacterClass::AddToInventory(string item)
{


}

