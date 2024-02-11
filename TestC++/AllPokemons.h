#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include "Ability.h"
#include "PokeType.h"
#include "Pokemon.h"


class AllPokemons
{
};

Pokemon Rattata("Rattata", "I'm a Rat", PokeType1::Normal, 50, 105, 137, "");
Pokemon Charmander("Charmander", "I'm a", PokeType1::Fire, 13, 60, 82, "");
Pokemon Carapuce("Charmander", "I'm a", PokeType1::Fire, 13, 60, 82, "");
Pokemon Germignon("Germignon", 25, 100, PokeType1::Grass, "");
Pokemon Pikachu("Pikachu", 25, 100, PokeType1::Electric, "");
Pokemon Goupix("Goupix", 25, 100, PokeType1::Ice, "");
Pokemon KickLee("KickLee", 25, 100, PokeType1::Fighting, "");
Pokemon Abo("Abo", 25, 100, PokeType1::Poison, "");
Pokemon Sablaireau("Sablaireau", 25, 100, PokeType1::Ground, "");
Pokemon Arceus("Arceus", 25, 100, PokeType1::Flying, "");
Pokemon Nucleos("Nucleos", 25, 100, PokeType1::Psychic, "");
Pokemon Chenipan("Chenipan", 25, 100, PokeType1::Bug, "");
Pokemon Kranidos("Kranidos", 25, 100, PokeType1::Rock, "");
Pokemon Toutombe("Toutombe", 25, 100, PokeType1::Ghost, "");
Pokemon Draco("Draco", 25, 100, PokeType1::Dragon, "");
Pokemon Chacripain("Chacripan", 25, 100, PokeType1::Dark, "");
Pokemon Miaouss("Miaouss", 25, 100, PokeType1::Steel, "");
Pokemon Togepi("Togepi", 25, 100, PokeType1::Fairy, "");

vector<Pokemon> AllPokemons = { Rattata, Charmander, Carapuce, Germignon, Pikachu, Goupix, KickLee, Abo, Sablaireau,
Chenipan, Nucleos, };

