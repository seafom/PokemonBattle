#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include "PokeType.h"
#include "Pokemon.h"
using namespace std;

//ABILITY CLASS
class Ability
{
private:
	string mName1;
	float DamageAmount;
	float HP;
	PokeType1 mPoketype;
	string AttackName;

public:
	Ability(string mName1, float mDamageAmount, float mHP, PokeType1 mPoketype, string mAttackName);
	string GetName();
	float GetDamageAmount();
	float GetHP();
	PokeType1 GetPokeType();
	string GetAttackName();

};

Ability Rattata("Rattata", 25, 100, PokeType1::Normal, "Charge");
Ability Charmander("Charmander", 25, 100, PokeType1::Fire, "");
Ability Carapuce("Carapuce", 25, 100, PokeType1::Water, "");
Ability Germignon("Germignon", 25, 100, PokeType1::Grass, "");
Ability Pikachu("Pikachu", 25, 100, PokeType1::Electric, "");
Ability Goupix("Goupix", 25, 100, PokeType1::Ice, "");
Ability KickLee("KickLee", 25, 100, PokeType1::Fighting, "");
Ability Abo("Abo", 25, 100, PokeType1::Poison, "");
Ability Sablaireau("Sablaireau", 25, 100, PokeType1::Ground, "");
Ability Arceus("Arceus", 25, 100, PokeType1::Flying, "");
Ability Nucleos("Nucleos", 25, 100, PokeType1::Psychic, "");
Ability Chenipan("Chenipan", 25, 100, PokeType1::Bug, "");
Ability Kranidos("Kranidos", 25, 100, PokeType1::Rock, "");
Ability Toutombe("Toutombe", 25, 100, PokeType1::Ghost, "");
Ability Draco("Draco", 25, 100, PokeType1::Dragon, "");
Ability Chacripain("Chacripan", 25, 100, PokeType1::Dark, "");
Ability Miaouss("Miaouss", 25, 100, PokeType1::Steel, "");
Ability Togepi("Togepi", 25, 100, PokeType1::Fairy, "");


vector<Ability> allAbilities = { Rattata, Charmander, Carapuce, Germignon, Pikachu, Goupix, KickLee, Abo, Sablaireau,
Chenipan, Nucleos, };

