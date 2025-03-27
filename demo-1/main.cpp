#include <iostream>
#include "Dog.cpp"

using namespace std;

int main()
{
    /* cout << "Hello World!" << endl;
    char myChar = 97;
    cout << myChar << endl;

    string firstName = "Chris";
    string lastName("Chevalier");
    cout << "Bienvenue sur ce super programme, " << firstName + " " + lastName << " !" << endl; */

    Dog cosmo("Cosmo", "Golden Retriver", 2);
    cosmo.bark();
    cosmo.sniff();
    cosmo.setName("Cosmo, le plus beau 😍");
    cosmo.display();

    return 0;
}