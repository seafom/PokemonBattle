#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include "PokeType.h"
#include "Pokemon.h"
#include "Ability.h"
#include "AllAbilities.h"

class AllAbilities
{

	//(string mAttackName, int mDamageAmount, PokeType1 mPoketype)
};


Ability Charge("Charge", 25,  PokeType1::Normal);
Ability Charmander("Charmander", 25, PokeType1::Fire);
Ability Carapuce("Carapuce", 25, PokeType1::Water);
Ability Germignon("Germignon", 25,  PokeType1::Grass);
Ability Pikachu("Pikachu", 25, PokeType1::Electric);
Ability Goupix("Goupix", 25, PokeType1::Ice);
Ability KickLee("KickLee", 25, PokeType1::Fighting);
Ability Abo("Abo",25, PokeType1::Poison);
Ability Sablaireau("Sablaireau", 25, PokeType1::Ground);
Ability Arceus("Arceus", 25, PokeType1::Flying);
Ability Nucleos("Nucleos", 25, PokeType1::Psychic);
Ability Chenipan("Chenipan", 25, PokeType1::Bug);
Ability Kranidos("Kranidos", 25, PokeType1::Rock);
Ability Toutombe("Toutombe", 25, PokeType1::Ghost);
Ability Draco("Draco", 25,PokeType1::Dragon);
Ability Chacripain("Chacripan", 25, PokeType1::Dark);
Ability Miaouss("Miaouss", 25, PokeType1::Steel);
Ability Togepi("Togepi", 25, PokeType1::Fairy);


vector<Ability> AllAbilities = { Charge, Charmander, Carapuce, Germignon, Pikachu, Goupix, KickLee, Abo, Sablaireau,
Chenipan, Nucleos, };


