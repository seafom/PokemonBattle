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
Pokemon::Pokemon(string PokemonName, string Description, enum PokeType, int Level, float Lifepoints, list<string> mAbilities)
{
    mName = PokemonName;
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


// POKEMON ABILITY
Ability::Ability(string mName, float mDamageAmount, float mHP, PokeType1 mPokeType, string mAttackName)
{
    mName1 = mName;
    DamageAmount = mDamageAmount;
    HP = mHP;
    PokeType1 mPokeType;
    AttackName = mAttackName;
};



    // call the pokemon type
    int main() 
    {

      /*  poketype pokemontype = poketype::grass;

        if (pokemontype == poketype::normal) {
            std::cout << "normal type pokemon selected" << std::endl;
        }
        else if (pokemontype == poketype::fire) {
            std::cout << "fire type pokemon selected" << std::endl;
        }
        else if (pokemontype == poketype::water) {
            std::cout << "water type pokemon selected" << std::endl;
        }
        else if (pokemontype == poketype::grass) {
            std::cout << "grass type pokemon selected" << std::endl;
        }
        else if (pokemontype == poketype::electric) {
            std::cout << "electric type pokemon selected" << std::endl;
        }
        else if (pokemontype == poketype::ice) {
            std::cout << "ice type pokemon selected" << std::endl;
        }
        else if (pokemontype == poketype::fighting) {
            std::cout << "fighting type pokemon selected" << std::endl;
        }
        else if (pokemontype == poketype::poison) {
            std::cout << "poison type pokemon selected" << std::endl;
        }
        else if (pokemontype == poketype::ground) {
            std::cout << "ground type pokemon selected" << std::endl;
        }
        else if (pokemontype == poketype::flying) {
            std::cout << "flying type pokemon selected" << std::endl;
        }
        else if (pokemontype == poketype::psychic) {
            std::cout << "psychic type pokemon selected" << std::endl;
        }
        else if (pokemontype == poketype::bug) {
            std::cout << "bug type pokemon selected" << std::endl;
        }
        else if (pokemontype == poketype::rock) {
            std::cout << "rock type pokemon selected" << std::endl;
        }
        else if (pokemontype == poketype::ghost) {
            std::cout << "ghost type pokemon selected" << std::endl;
        }
        else if (pokemontype == poketype::dragon) {
            std::cout << "dragon type pokemon selected" << std::endl;
        }
        else if (pokemontype == poketype::dark) {
            std::cout << "dark type pokemon selected" << std::endl;
        }
        else if (pokemontype == poketype::steel) {
            std::cout << "steel type pokemon selected" << std::endl;
        }
        else if (pokemontype == poketype::fairy) {
            std::cout << "fairy type pokemon selected" << std::endl;
        }
        else {
            std::cout << "invalid pokemon type" << std::endl;
        }

        return 0;
    }*/




