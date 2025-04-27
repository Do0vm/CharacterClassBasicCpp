#include "Goblin.h"
#include <iostream>

Goblin::Goblin()
    : CharacterClass("Goblin", 5, 0, 5, 0, { "Rusty Dagger" })
{
    attack = 2;
}

Goblin::Goblin(int hp, int mp, int mhp, int mmp)
    : CharacterClass("Goblin", hp, mp, mhp, mmp, { "Rusty Dagger" })
{
    attack = 2;
}

void Goblin::displayInfo() const {
    std::cout << "--- Enemy: " << name << " ---\n"
        << "HP: " << health << "/" << maxHealth << "\n"
        << "Attack: " << attack << "\n";
}

int Goblin::attackRoll() const {
    return (std::rand() % 4 + 1) + attack;
}
