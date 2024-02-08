#include "Pokemon.h"
#include <string>
#include <iostream>
#include <vector>
#include "PokeType.h"
#include "Ability.h"
#include <list>


//cin = store anything typed in 
//cout display a text
//endl saute une ligne 

using namespace std;

//POKEMON
Pokemon::Pokemon(string Name, string Description, enum PokeType, int Level, float Lifepoints, list<string> mAbilities)
{
    mName = Name;
    mDescription = Description;
    mLevel = Level;
    mLifepoints = Lifepoints;
    mAbilities = {"Use Ability", "Learn a new ability", "Get in the pokeball", "Rest"};
}




// TRAINER
Trainer::Trainer(string FirstName, string LastName, string CatchPhrase, float Money, int NumberPokeballs)
{
    mFirstName = FirstName;
    mLastName = LastName;
    mCatchPhrase = CatchPhrase;
    mMoney = Money;
    mNumberPokeballs = NumberPokeballs;
};


Ability::Ability(string Name1, float DamageAmount, PokeType1 mPokeType)
{
    mName1 = Name1;
    mDamageAmount = DamageAmount;
    PokeType1 = mPokeType;
};

PokeType Papilusion = PokeType ("Papilusion", )





    
    //// Call the POKEMON TYPE
    //int main() {
    //    PokeType pokemonType = PokeType::Grass;

    //    if (pokemonType == PokeType::Normal) {
    //        std::cout << "Normal type Pokemon selected" << std::endl;
    //    }
    //    else if (pokemonType == PokeType::Fire) {
    //        std::cout << "Fire type Pokemon selected" << std::endl;
    //    }
    //    else if (pokemonType == PokeType::Water) {
    //        std::cout << "Water type Pokemon selected" << std::endl;
    //    }
    //    else if (pokemonType == PokeType::Grass) {
    //        std::cout << "Grass type Pokemon selected" << std::endl;
    //    }
    //    else if (pokemonType == PokeType::Electric) {
    //        std::cout << "Electric type Pokemon selected" << std::endl;
    //    }
    //    else if (pokemonType == PokeType::Ice) {
    //        std::cout << "Ice type Pokemon selected" << std::endl;
    //    }
    //    else if (pokemonType == PokeType::Fighting) {
    //        std::cout << "Fighting type Pokemon selected" << std::endl;
    //    }
    //    else if (pokemonType == PokeType::Poison) {
    //        std::cout << "Poison type Pokemon selected" << std::endl;
    //    }
    //    else if (pokemonType == PokeType::Ground) {
    //        std::cout << "Ground type Pokemon selected" << std::endl;
    //    }
    //    else if (pokemonType == PokeType::Flying) {
    //        std::cout << "Flying type Pokemon selected" << std::endl;
    //    }
    //    else if (pokemonType == PokeType::Psychic) {
    //        std::cout << "Psychic type Pokemon selected" << std::endl;
    //    }
    //    else if (pokemonType == PokeType::Bug) {
    //        std::cout << "Bug type Pokemon selected" << std::endl;
    //    }
    //    else if (pokemonType == PokeType::Rock) {
    //        std::cout << "Rock type Pokemon selected" << std::endl;
    //    }
    //    else if (pokemonType == PokeType::Ghost) {
    //        std::cout << "Ghost type Pokemon selected" << std::endl;
    //    }
    //    else if (pokemonType == PokeType::Dragon) {
    //        std::cout << "Dragon type Pokemon selected" << std::endl;
    //    }
    //    else if (pokemonType == PokeType::Dark) {
    //        std::cout << "Dark type Pokemon selected" << std::endl;
    //    }
    //    else if (pokemonType == PokeType::Steel) {
    //        std::cout << "Steel type Pokemon selected" << std::endl;
    //    }
    //    else if (pokemonType == PokeType::Fairy) {
    //        std::cout << "Fairy type Pokemon selected" << std::endl;
    //    }
    //    else {
    //        std::cout << "Invalid Pokemon type" << std::endl;
    //    }

    //    return 0;
    //}




