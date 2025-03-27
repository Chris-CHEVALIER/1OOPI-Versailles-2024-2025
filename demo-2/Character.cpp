#include "Character.hpp"

Character::Character()
{
    name = "";
    life = 0;
}

Character::Character(string newName, int newLife)
{
    name = newName;
    life = newLife;
}

void Character::rename(string newName)
{
    if (newName.size() > 3 && newName.size() < 25)
    {
        name = newName;
    }
}

void Character::takePotion(int lifePoints)
{
    // life = life + lifePoints;
    life += lifePoints;
    if (life > 100)
    {
        life = 100;
    }
}

void Character::display() const
{
    cout << name << " a " << life << " points de vie." << endl;
}