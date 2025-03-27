#include <iostream>
using namespace std;

class Dog
{
    // Attributs :
private:
    string name;
    string breed;
    int age;
    bool isGoodDoggo;

    // Méthodes :
public:
    Dog(string newName, string newBreed, int newAge, bool newIsGoodDoggo = true);
    void bark() const;
    void sniff() const;
    void display() const;
    void setName(string newName);
};