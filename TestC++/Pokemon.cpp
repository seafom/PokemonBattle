#include "Pokemon.h"
#include <string>
#include <iostream>
#include <vector>

#include <list>

using namespace std;

Pokemon::Pokemon(string name, string pokedex)
{
    mName = name;
    mDescription = "Yapee";
    mLifepoints = 10;
    mAbilities = { "Use Ability", "Learn a new ability", "Get in the pokeball", "Rest"};

}

Pokemon::Pokemon() {}

string Pokemon::Getname() { return mName; }

string Pokemon::GetDescription() { return mDescription; }

int Pokemon::Getlifepoints() { return mLifepoints; }

void Pokemon::Setcapabilities(string newCapabilities) { return mCapabilities; }

int main() 
{
    Pokemon defaultPokemon = Pokemon();
    cout << defaultPokemon.GetDescription() << endl;
    string name;
    cin >> name;
    cout << "What is your name ?" << endl;
    string desc;
    cin >> desc;
    cout << "What is your description ?" << endl;
    string classCategory
    cin >> classCategory;
    cout << "What is the image ?" << endl;
}