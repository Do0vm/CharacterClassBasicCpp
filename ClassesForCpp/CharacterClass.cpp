#include "CharacterClass.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

CharacterClass::CharacterClass()
    : name("Adventurer"), health(10), mana(10), maxHealth(10), maxMana(10),
    attack(1), inventory{}, superPower(SuperPower::None)
{
    std::srand(static_cast<unsigned>(std::time(nullptr)));
}

CharacterClass::CharacterClass(const std::string& n, int hp, int mp, int mhp, int mmp, const std::vector<std::string>& inv)
    : name(n), health(hp), mana(mp), maxHealth(mhp), maxMana(mmp),
    attack(1), inventory(inv), superPower(SuperPower::None)
{
    std::srand(static_cast<unsigned>(std::time(nullptr)));
}



void CharacterClass::displayInfo() const {


    std::cout << "=== " << name << " ===\n"
        << "HP: " << health << "/" << maxHealth << "\n"
        << "Mana: " << mana << "/" << maxMana << "\n"
        << "Attack power: " << attack << "\n"
        << "Super Power: " << getSuperPowerName() << "\n";


    listInventory();
}

bool CharacterClass::chooseSuperPower(int choice) {


    if (choice < 1 || choice > 4) return false;


    superPower = static_cast<SuperPower>(choice);


    return true;
}

std::string CharacterClass::getSuperPowerName() const {



    switch (superPower) {
    case SuperPower::Fire:  return "Fire";

    case SuperPower::Water: return "Water";

    case SuperPower::Ice:   return "Ice";

    case SuperPower::Air:   return "Air";

    default:                return "None";
    }
}

void CharacterClass::listInventory() const {

    std::cout << "Inventory:";

    for (const auto& item : inventory) {

        std::cout << " [" << item << "]";

    }

    std::cout << "\n";
}

void CharacterClass::addItem(const std::string& item) {

    inventory.push_back(item);

}

int CharacterClass::attackRoll() const {

    return (std::rand() % 6 + 1) + attack;

}
