#include "Character.cpp"
#include "Wizard.cpp"
#include "Warrior.cpp"
#include <vector>

void welcomeMessage(Character &myCharacter)
{
    cout << "Bienvenue à ";
    myCharacter.display();
}

int main()
{
    /* Character chris("Chris", 100);
    welcomeMessage(chris);

    Wizard gandalf("Gandalf", 100, 100);
    welcomeMessage(gandalf);

    Warrior geralt("Geralt", 100, 25);
    welcomeMessage(geralt); */
    vector<Character *> party;
    party.push_back(new Warrior("Athéna La Déesse de La Guerre", 5000, 500));
    party.push_back(new Warrior("Mathias", 1, 750));
    party.push_back(new Wizard("Enaël", 2, 1000));

    for (int i = 0; i < party.size(); i++)
    {
        party[i]->display();
        cout << " est équipe d'une " << party[i]->getWeapon() << endl;
        delete party[i];
        party[i] = 0;
    }

    return 0;
}