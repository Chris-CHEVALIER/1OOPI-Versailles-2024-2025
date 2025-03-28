#include "Warrior.hpp"

Warrior::Warrior() {}

Warrior::Warrior(string newName, int newLife, int newAtk) : Character(newName, newLife)
{
    atk = newAtk;
}

void Warrior::display() const
{
    cout << name << " est un guerrier avec " << atk << " points d'attaque." << endl;
}

string Warrior::getWeapon()
{
    return "Épée";
}