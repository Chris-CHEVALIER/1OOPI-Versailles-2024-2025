#include "Character.hpp"

class Warrior : private Character
{
private:
    int atk;

public:
    Warrior();
    Warrior(string newName, int newLife, int newAtk);
    void display() const;
};