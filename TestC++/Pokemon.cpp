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

//POKEMON
Pokemon::Pokemon(string Name, string Description)
{
    mName = Name;
    mDescription = "";
    mLifepoints = 10;
    mAbilities = { "Use Ability", "Learn a new ability", "Get in the pokeball", "Rest"};
}
Pokemon::Pokemon() {}
string Pokemon::Getname() { return mName; }
string Pokemon::GetDescription() { return mDescription; }
int Pokemon::Getlifepoints() { return mLifepoints; }



// TRAINER
Trainer::Trainer(string FirstName, string LastName, string CatchPhrase, float Money, int NumberPokeballs)
{
    mFirstName = FirstName;
    mLastName = LastName;
    mCatchPhrase = CatchPhrase;
    mMoney = Money;
    mNumberPokeballs = NumberPokeballs;

};


int main()
{
    // Call the POKEMON TYPE
    PokeType pokemonType = PokeType::Grass;

    switch (pokemonType)
    {
    case PokeType::Normal:
        std::cout << "Normal type Pokemon selected" << std::endl;
        break;
    case PokeType::Fire:
        std::cout << "Fire type Pokemon selected" << std::endl;
        break;
    case PokeType::Water:
        std::cout << "Water type Pokemon selected" << std::endl;
        break;
    case PokeType::Grass:
        std::cout << "Grass type Pokemon selected" << std::endl;
        break;
    case PokeType::Electric:
        std::cout << "Electric type Pokemon selected" << std::endl;
        break;
    case PokeType::Ice:
        std::cout << "Ice type Pokemon selected" << std::endl;
        break;
    case PokeType::Fighting:
        std::cout << "Fighting type Pokemon selected" << std::endl;
        break;
    case PokeType::Poison:
        std::cout << "Poison type Pokemon selected" << std::endl;
        break;
    case PokeType::Ground:
        std::cout << "Ground type Pokemon selected" << std::endl;
        break;
    case PokeType::Flying:
        std::cout << "Flying type Pokemon selected" << std::endl;
        break;
    case PokeType::Psychic:
        std::cout << "Psychic type Pokemon selected" << std::endl;
        break;
    case PokeType::Bug:
        std::cout << "Bug type Pokemon selected" << std::endl;
        break;
    case PokeType::Rock:
        std::cout << "Rock type Pokemon selected" << std::endl;
        break;
    case PokeType::Ghost:
        std::cout << "Ghost type Pokemon selected" << std::endl;
        break;
    case PokeType::Dragon:
        std::cout << "Dragon type Pokemon selected" << std::endl;
        break;
    case PokeType::Dark:
        std::cout << "Dark type Pokemon selected" << std::endl;
        break;
    case PokeType::Steel:
        std::cout << "Steel type Pokemon selected" << std::endl;
        break;
    case PokeType::Fairy:
        std::cout << "Fairy type Pokemon selected" << std::endl;
        break;

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



