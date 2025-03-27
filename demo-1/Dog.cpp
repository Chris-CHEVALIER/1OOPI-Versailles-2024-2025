#include "Dog.hpp"

Dog::Dog(string newName, string newBreed, int newAge, bool newIsGoodDoggo)
{
    name = newName;
    breed = newBreed;
    age = newAge;
    isGoodDoggo = true;
}

void Dog::bark() const
{
    cout << "Woof!" << endl;
}

void Dog::sniff() const
{
    cout << "Sniff sniff..." << endl;
}

void Dog::display() const
{
    string tmp = isGoodDoggo ? "C'est un bon toutou !" : "C'est un vilain toutou !";
    cout << name << " est un " << breed << " de " << age << " ans. " << tmp << endl;
   /*  if (isGoodDoggo)
    {
        cout << "C'est un bon toutou !";
    }
    else
    {
        cout << "C'est un vilain toutou !";
    } */
}

void Dog::setName(string newName)
{
    name = newName;
}