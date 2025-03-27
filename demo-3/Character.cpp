#include "Character.hpp"

Character::Character()
{
}

Character::Character(string newName, int newLife)
{
    name = newName;
    life = newLife;
}

void Character::display() const
{
    cout << name << " est un personnage avec " << life << " pv." << endl;
}