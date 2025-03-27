#include "Character.hpp"

class Wizard : private Character
{
private:
    int mana;

public:
    Wizard();
    Wizard(string newName, int newLife, int newMana);
    void display() const;
};