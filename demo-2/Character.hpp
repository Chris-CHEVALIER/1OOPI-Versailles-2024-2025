#include <iostream>
using namespace std;
#pragma once

class Character
{
protected:
    string name;
    int life;

public:
    Character();
    Character(string newName, int newLife);
    void rename(string newName);
    void takePotion(int lifePoints);
    void display() const;
};