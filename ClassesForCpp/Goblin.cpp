#include "Goblin.h"

Goblin::Goblin() :CharacterClass("Goblin",2,2,15,10,vector<string>{})
{
}

Goblin::Goblin(string name, int health, int mana, int maxHealth, int maxMana, vector<string>inventory) : CharacterClass(name,health,mana,maxHealth,maxMana,inventory)
{
	
}

void Goblin::SneakAttack()
{
}

void Goblin::DisplayInfo()
{
	CharacterClass::DisplayInfo();

	cout << "Class: Goblin" << endl;
}
