#pragma once
#include <string>
#include <vector>
#include <map>
#include "SuperPowerEnums.h"

using std::string;
using std::vector;
using std::map;
using std::vector;

class CharacterClass
{
public:

	
	string adventurerName;




	CharacterClass();
	CharacterClass(string name, int health, int mana, int maxHealth, int maxMana, vector<string>inventory);

	void SetName(string name);
	
	string GetName() const;
	void DisplayInfo();

	//string SuperPowerChooser() const;

	bool SetSuperPowerFromInput(int Input);

	string GetSuperPowerName(MySuperPowerEnumClass SuperPower);

	
protected:
	void DiceRoll();
	



	//void InventoryList();
	//void AddToInventory(string item);


private:
	string cName;
	string cSuperPower;
	map<string, int> cAbilities;

	int cMaxHealth;
	int cHealth;
	int cMaxMana;
	int cMana;



	vector<string> cInventory;

	MySuperPowerEnumClass SuperPower;
};

