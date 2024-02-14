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
	//string Name, string Description, PokeType1 mPokeType, int Level, int Life
};

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
Pokemon Chacripain("Chacripan", "I'm Chacripan", PokeType1::Dark, 9, 20 );
Pokemon Miaouss("Miaouss", "I'm Miaouss", PokeType1::Steel, 70, 50 );
Pokemon Togepi("Togepi", "I'm Togepi", PokeType1::Fairy, 20, 42 );

vector<Pokemon> AllPokemons = { Rattata, Charmander, Carapuce, Germignon, Pikachu, Goupix, KickLee, Abo, Sablaireau, Arceus, Nucleos,
Chenipan, Kranidos, Toutombe, Draco, Chacripain, Miaouss, Togepi };

