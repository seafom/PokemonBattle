#include "Pokemon.h"
#include <string>
#include <iostream>
#include <vector>
#include "PokeType.h"
#include "Ability.h"
#include "Pokemon.h"
#include "AllPokemons.h"


//cin = store anything typed in 
//cout display a text
//endl saute une ligne 

using namespace std;

//POKEMON
Pokemon::Pokemon(string Name, string Description, PokeType1 mPokeType, int Level, int Life)
{
    mName = Name;
    mDescription = Description;
    PokeType1 mPokeType;
    mLevel = Level;
    mLife = Life;
    vector<Pokemon> AllPokemons;

    //string Getname();
    //string GetDescription();
    //PokeType1 mPokeType();
    //int GetLevel();
    //int GetLife();
}

int main() 
{
    Pokemon Rattata("Rattata", "I'm a Rat", PokeType1::Normal, 50, 105);
    Pokemon Charmander("Charmander", "I'm a", PokeType1::Fire, 13, 60);
    Pokemon Carapuce("Charmander", "I'm a", PokeType1::Fire, 13, 60);
    Pokemon Germignon("Germignon", "I'm Germignon", PokeType1::Grass, 5, 25);
    Pokemon Pikachu("Pikachu", "I'm Pikachu", PokeType1::Electric, 20, 100);
    Pokemon Goupix("Goupix", "I'm Goupix", PokeType1::Ice, 10, 50);
    Pokemon KickLee("KickLee", "I'm Kicklee", PokeType1::Fighting, 7, 25);
    Pokemon Abo("Abo", "I'm Abo", PokeType1::Poison, 4, 14);
    Pokemon Sablaireau("Sablaireau", "I'm Sablaireau", PokeType1::Ground, 8, 18);
    Pokemon Arceus("Arceus", "I'm Arceus", PokeType1::Flying, 10, 51);
    Pokemon Nucleos("Nucleos", "I'm Nucleos", PokeType1::Psychic, 7, 23);
    Pokemon Chenipan("Chenipan", "I'm Chenipan", PokeType1::Bug, 12, 30);
    Pokemon Kranidos("Kranidos", "I'm Kranidos", PokeType1::Rock, 4, 20);
    Pokemon Toutombe("Toutombe", "I'm Toutombe", PokeType1::Ghost, 5, 10);
    Pokemon Draco("Draco", "I'm Draco", PokeType1::Dragon, 10, 31);
    Pokemon Chacripain("Chacripan", "I'm Chacripan", PokeType1::Dark, 9, 20);
    Pokemon Miaouss("Miaouss", "I'm Miaouss", PokeType1::Steel, 70, 50);
    Pokemon Togepi("Togepi", "I'm Togepi", PokeType1::Fairy, 20, 42);



    std::cout <<Rattata.Getname() << " " << Rattata.GetDescription() << " " << Rattata.GetPokeType() << " " << Rattata.GetLevel() << " " << Rattata.GetLife() << "." << std::endl;
    std::cout << Charmander.Getname() << " " << Charmander.GetDescription() << " " << Charmander.GetPokeType() << " " << Charmander.GetLevel() << " " << Charmander.GetLife() << "." << std::endl;
    std::cout << Carapuce.Getname() << " " << Carapuce.GetDescription() << " " << Carapuce.GetPokeType() << " " << Carapuce.GetLevel() << Carapuce.GetLife() << "." << std::endl;
    std::cout << Germignon.Getname() << " " << Germignon.GetDescription() << " " << Germignon.GetPokeType() << " " << Germignon.GetLevel() << " " << Germignon.GetLife() << "." << std::endl;
    std::cout << Pikachu.Getname() << " " << Pikachu.GetDescription() << " " <<Pikachu.GetPokeType() << " " << Pikachu.GetLevel() << " " << Pikachu.GetLife() << "."<< std::endl;
    std::cout << Goupix.Getname() << " " << Goupix.GetDescription() << " " << Goupix.GetPokeType() << " " << Goupix.GetLevel() << Goupix.GetLife() << "." << std::endl;
    std::cout << KickLee.Getname() << " " << KickLee.GetDescription() << " " << KickLee.GetPokeType() << " " << KickLee.GetLevel() << " " << KickLee.GetLife() << std::endl;
    std::cout << Abo.Getname() << " " << Abo.GetDescription() << " " << Abo.GetPokeType() << " " << Abo.GetLevel() << " " << Abo.GetLife() <<"." << std::endl;
    std::cout << Sablaireau.Getname() << " " << Sablaireau.GetDescription() << " " << Sablaireau.GetPokeType() << " " << Sablaireau.GetLevel() << " " << Sablaireau.GetLife() <<"." << std::endl;
    std::cout << Arceus.Getname() << " " << Arceus.GetDescription() << " " << Arceus.GetPokeType() << " " << Arceus.GetLevel() << " " << Arceus.GetLife() << "." << std::endl;
    std::cout << Nucleos.Getname() << " " << Nucleos.GetDescription() << " " << Nucleos.GetPokeType() << " " << Nucleos.GetLevel() << " " << Nucleos.GetLife() << "." << std::endl;
    std::cout << Chenipan.Getname() << " " << Chenipan.GetDescription() << " " << Chenipan.GetPokeType() << " " << Chenipan.GetLevel() << " " << Chenipan.GetLife() << "." << std::endl;
    std::cout << Kranidos.Getname() << " " << Kranidos.GetDescription() << " " << Kranidos.GetPokeType() << " " << Kranidos.GetLevel() << " " << Kranidos.GetLife() << "." << std::endl;
    std::cout << Toutombe.Getname() << " " << Toutombe.GetDescription() << " " << Toutombe.GetPokeType() << " " << Toutombe.GetLevel() << " " << Toutombe.GetLife() << "." << std::endl;
    std::cout << Draco.Getname() << " " << Draco.GetDescription() << " " << Draco.GetPokeType() << " " << Draco.GetLevel() << " " << Draco.GetLife() << "." << std::endl;
    std::cout << Chacripain.Getname() << " " << Chacripain.GetDescription() << " " << Chacripain.GetPokeType() << " " << Chacripain.GetLevel() << Chacripain.GetLife() << "." << std::endl;
    std::cout << Miaouss.Getname() << " " << Miaouss.GetDescription() << " " << Miaouss.GetPokeType() << " " << Miaouss.GetLevel() << " " << Miaouss.GetLife() << "." << std::endl;
    std::cout << Togepi.Getname() << " " << Togepi.GetDescription() << " " << Togepi.GetPokeType() << " " << Togepi.GetLevel() << " " << Togepi.GetLife() << "." << std::endl;
    std::cout << std::endl;


    std::cout << "Choose One Pokemon" << std::endl;

}



// POKEMON ABILITY
Ability::Ability(string AttackName, int DamageAmount, PokeType1 mPoketype)
{
    mAttackName = AttackName;
    mDamageAmount = DamageAmount;
    PokeType1 mPokeType;
    vector<Ability> AllAbilities;
}



    // call the pokemon type
    //int main() 
    //{

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




