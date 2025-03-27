#include "Character.cpp"
#include "Wizard.cpp"

int main()
{
    Character david("David", 80);
    david.takePotion(345678);
    david.rename("Chris");
    david.display();

    Wizard oz("Oz", 3, 100);
    oz.display();

    return 0;
}