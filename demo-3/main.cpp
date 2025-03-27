#include "Character.cpp"
#include "Wizard.cpp"
#include "Warrior.cpp"

int main()
{
    Character chris("Chris", 100);
    chris.display();

    Wizard gandalf("Gandalf", 100, 100);
    gandalf.display();

    Warrior geralt("Geralt", 100, 25);
    geralt.display();

    return 0;
}