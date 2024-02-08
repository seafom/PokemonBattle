#include <string>
#include <iostream>
#include <vector>
#include "PokeType.h"
#include "Ability.h"
#include "Main.h"
#include "Pokemon.h"
#include <list>

using namespace std;

int main() 
{
    Ability Rattata("Rattata", 25, 100, PokeType1::Normal,"Charge");
    Ability Charmander("Charmander", 25, 100, PokeType1::Fire,"");
    Ability Carapuce("Carapuce", 25, 100, PokeType1::Water,"");
    Ability Germignon("Germignon", 25, 100, PokeType1::Grass,"");
    Ability Pikachu("Pikachu", 25, 100, PokeType1::Electric,"");
    Ability Goupix("Goupix", 25, 100, PokeType1::Ice,"");
    Ability KickLee("KickLee", 25, 100, PokeType1::Fighting,"");
    Ability Abo("Abo", 25, 100, PokeType1::Poison,"");
    Ability Sablaireau("Sablaireau", 25, 100, PokeType1::Ground,"");
    Ability Chenipan("Chenipan", 25, 100, PokeType1::Flying,"");
    Ability Nucleos("Nucleos", 25, 100, PokeType1::Psychic,"");
    Ability Chenipan("Chenipan", 25, 100, PokeType1::Bug,"");
    Ability Kranidos("Kranidos", 25, 100, PokeType1::Rock,"");
    Ability Toutombe("Toutombe", 25, 100, PokeType1::Ghost,"");
    Ability Draco("Draco", 25, 100, PokeType1::Dragon,"");
    Ability Chacripain("Chacripan", 25, 100, PokeType1::Dark,"");
    Ability Miaouss("Miaouss", 25, 100, PokeType1::Steel,"");
    Ability Togepi("Togepi", 25, 100, PokeType1::Fairy,"");

    return 0;

    vector<Ability> allAbilities = { BodySlam, };

    //cout << "What is your name ? " << endl; //Display a text
    //string intro; //Create the answer
    //cin >> intro; // Store anything typed in answer
    //cout << "Hello" << intro << ", What is your catch phrase ?" << endl; //Display a text

    //cout << "What is your name" << endl; //Display a text
    //string catchphrase; //Create the answer
    //cin >> catchphrase; // Store anything typed in answer
    ////cout << catchphrase << endl; //Display a text
    ////cout<<"You have" <<&money<<

}
