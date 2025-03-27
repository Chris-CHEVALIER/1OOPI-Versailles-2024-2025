#include "Wizard.hpp"

Wizard::Wizard() {}

Wizard::Wizard(string newName, int newLife, int newMana) : Character(newName, newLife)
{
    mana = newMana;
}

void Wizard::display() const
{
    cout << name << " est un mage avec " << mana << " pm" << endl;
}