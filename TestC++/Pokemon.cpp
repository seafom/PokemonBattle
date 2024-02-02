#include "Pokemon.h"
#include <string>
#include <iostream>
#include <vector>
#include "PokeType.h"


#include <list>

//cin = store anything typed in 
//cout display a text
//endl saute une ligne 

using namespace std;

Pokemon::Pokemon(string Name, string Description)
{
    mName = Name;
    mDescription = "Yapee";
    mLifepoints = 10;
    mAbilities = { "Use Ability", "Learn a new ability", "Get in the pokeball", "Rest"};

}

// POKEMON
Pokemon::Pokemon() {}
string Pokemon::Getname() { return mName; }
string Pokemon::GetDescription() { return mDescription; }
int Pokemon::Getlifepoints() { return mLifepoints; }

// TRAINER
Trainer::~Trainer() {}
Trainer::Trainer(string FirstName, string LastName, string CatchPhrase, float Money, float LifePoints)




int main()
{
    // Call the POKEMON TYPE
    PokeType pokemonType = PokeType::Grass;

    switch (pokemonType)
    {
    case PokeType::Water:
        std::cout << "Water type Pokemon selected" << std::endl;
        break;
    case PokeType::Grass:
        std::cout << "Grass type Pokemon selected" << std::endl;
        break;
    case PokeType::Plant:
        std::cout << "Plant type Pokemon selected" << std::endl;
        break;
    case PokeType::Insect:
        std::cout << "Insect type Pokemon selected" << std::endl;
        break;
        // Add more cases as needed
    default:
        std::cout << "Invalid Pokemon type" << std::endl;
        break;
    }

    return 0;
    

    cout << "What is your name ? " << endl; //Display a text
    string intro; //Create the answer
    cin >> intro; // Store anything typed in answer
    cout << "Hello" << intro << ", What is your catch phrase ?" << endl; //Display a text

    cout << "What is your name" << endl; //Display a text
    string catchphrase; //Create the answer
    cin >> catchphrase; // Store anything typed in answer
    //cout << catchphrase << endl; //Display a text
    //cout<<"You have" <<&money<<
}



