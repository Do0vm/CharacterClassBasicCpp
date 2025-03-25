#pragma once
#include <string>
#include <vector>
#include <map>
#include "SuperPowerEnums.h"

using std::string;
using std::vector;
using std::map;


class CharacterClass
{
public:

	




	CharacterClass();
	CharacterClass(string name, int maxHealth, int maxMana, vector<string> inventory);

	void SetName(string name);
	void SetSuperPower(string name);
	string GetName() const;
	void DisplayInfo();


	string GetSuperPowerName(MySuperPowerEnumClass SuperPower) const;


protected:
	void DiceRoll();
	
	void InventoryList();
	void AddToInventory(string item);


private:
	string cName;
	string cSuperPower;
	map<string, int> cAbilities;

	int cMaxHealth;
	int cHealth;
	int cMaxMana;
	int cMana;



	vector<string> cInventory;


};

