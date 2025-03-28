#include "Character.hpp"

class Wizard : public Character
{
private:
    int mana;

public:
    Wizard();
    Wizard(string newName, int newLife, int newMana);
    void display() const;
    string getWeapon();
};