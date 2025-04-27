#pragma once
#include "CharacterClass.h"

class Goblin : public CharacterClass {

public:
    Goblin();

    Goblin(int hp, int mp, int mhp, int mmp);

    void displayInfo() const override;

    int attackRoll() const override;

};
