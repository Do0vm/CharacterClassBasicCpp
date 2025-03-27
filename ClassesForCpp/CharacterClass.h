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

	
	


	CharacterClass();
	CharacterClass(string name, int health, int mana, int maxHealth, int maxMana, vector<string>inventory);

	int GetHealth() const; 
	int GetAttack() const; 
	int GetMana() const;


	void setHealth(int health);
	void setAttack(int attack);
	void setMana(int mana);

	void RecieveDamage(int damage);


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
	int cDamage;
	int cAttack;

	vector<string> cInventory;

	MySuperPowerEnumClass SuperPower;
};

