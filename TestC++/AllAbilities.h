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


Ability Charge("Charge", 12,  PokeType1::Normal);
Ability Growl("Growl", 4, PokeType1::Water);
Ability RazorLeaf("RazorLeaf", 5,  PokeType1::Grass);
Ability Electricity("Electricity", 20, PokeType1::Electric);
Ability TailWhip("TailWhip", 25, PokeType1::Ice);
Ability SuperKick(" SuperKick", 10, PokeType1::Fighting);
Ability Bite("Bite",8, PokeType1::Poison);
Ability Desert("Desert", 9, PokeType1::Ground);
Ability HorseKick("HorseKick", 12, PokeType1::Flying);
Ability Confusion("Confusion", 2, PokeType1::Psychic);
Ability Chenapan("Chenapan", 5, PokeType1::Bug);
Ability HeadButt("HeadButt", 15, PokeType1::Rock);
Ability Cross("Cross", 10, PokeType1::Ghost);
Ability Drake("Drake", 7,PokeType1::Dragon);
Ability Copycat("Copycat", 4, PokeType1::Dark);
Ability Mioumiou("Mioumiou", 5, PokeType1::Steel);
Ability Stardust("Stardust", 10, PokeType1::Fairy);


vector<Ability> AllAbilities = { Charge, Growl, RazorLeaf, Electricity, TailWhip, SuperKick, Bite, Desert, HorseKick, Confusion, Chenapan, HeadButt, Cross, Drake, Copycat, Mioumiou, Stardust };


