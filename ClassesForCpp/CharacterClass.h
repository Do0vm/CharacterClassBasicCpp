#pragma once
#include <string>
#include <vector>

enum class SuperPower { None = 0, Fire = 1, Water = 2, Ice = 3, Air = 4 };

class CharacterClass {
protected:
    std::string name;

    int health, maxHealth;

    int mana, maxMana;

    int attack;

    std::vector<std::string> inventory;

    SuperPower superPower;
public:
    CharacterClass();

    CharacterClass(const std::string& n, int hp, int mp, int mhp, int mmp, const std::vector<std::string>& inv);

    virtual ~CharacterClass() = default;

    virtual void displayInfo() const;

    bool chooseSuperPower(int choice);

    std::string getSuperPowerName() const;

    void listInventory() const;

    void addItem(const std::string& item);

    virtual int attackRoll() const;
};
