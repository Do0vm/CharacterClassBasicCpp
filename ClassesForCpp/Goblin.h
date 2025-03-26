#pragma once
#include "CharacterClass.h"
#include <vector>
#include <string>
#include <iostream>

using std::endl;
using std::cout;

class Goblin : public CharacterClass {

public:
	Goblin();


	Goblin(string name,int health,int mana, int maxHealth, int maxMana, vector<string>inventory);

	void SneakAttack();

	virtual void DisplayInfo();



};