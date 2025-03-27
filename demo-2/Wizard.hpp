#include "Character.hpp"

class Wizard : private Character
{
private:
    int mana;

public:
    Wizard();
    Wizard(string newName, int newLife, int newMana);
    void castASpell();
    void takeManaPotion(int manaPoints);
    void display() const;
};