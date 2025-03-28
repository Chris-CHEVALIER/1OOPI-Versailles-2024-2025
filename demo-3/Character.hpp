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
    virtual void display() const;
    virtual ~Character() {};
    virtual string getWeapon() = 0;
};