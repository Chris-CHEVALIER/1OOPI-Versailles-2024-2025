#include "Wizard.hpp"

Wizard::Wizard() {}

Wizard::Wizard(string newName, int newLife, int newMana) : Character(newName, newMana)
{
    mana = newMana;
}

void Wizard::castASpell()
{
    mana -= 25;
    cout << name << " lance un sort !" << endl;
}

void Wizard::takeManaPotion(int manaPoints)
{
    mana += manaPoints;
}

void Wizard::display() const
{
    Character::display();
    cout << "C'est un mage avec " << mana << " points de mana." << endl;
}