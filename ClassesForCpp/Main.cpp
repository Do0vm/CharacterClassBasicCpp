#include <iostream>
#include <memory>
#include "CharacterClass.h"
#include "Goblin.h"

int main() {
    std::cout << "Welcome to the Dungeon!\n\n";

    CharacterClass hero("Hero", 8, 5, 12, 8, { "Knife", "Potion" });
    hero.displayInfo();

    std::cout << "\nChoose Your Super Power:\n"
        << "1) Fire  2) Water  3) Ice  4) Air\n";
    int choice = 0;
    while (!(std::cin >> choice) || !hero.chooseSuperPower(choice)) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Invalid. Pick 1–4: ";
    }

    std::cout << "\nPower set to " << hero.getSuperPowerName() << "\n\n";

    std::unique_ptr<CharacterClass> enemy = std::make_unique<Goblin>();
    enemy->displayInfo();

    std::cout << "\nBattle begins!\n";
    while (hero.attackRoll() > 0 && enemy->attackRoll() > 0) {
        int dmgToEnemy = hero.attackRoll();
        int dmgToHero = enemy->attackRoll();
        std::cout << "You hit Goblin for " << dmgToEnemy << " damage.\n"
            << "Goblin hits you for " << dmgToHero << " damage.\n\n";
        break;
    }

    std::cout << "Game Over.\n";
    return 0;
}
