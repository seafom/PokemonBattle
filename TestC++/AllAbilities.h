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

	Ability Charge = Ability("Charge", 12, PokeType1::Normal);
	Ability Growl = Ability("Growl", 4, PokeType1::Water);
	Ability RazorLeaf = Ability("RazorLeaf", 5, PokeType1::Grass);
	Ability Electricity = Ability("Electricity", 20, PokeType1::Electric);
	Ability TailWhip = Ability("TailWhip", 25, PokeType1::Ice);
	Ability SuperKick = Ability(" SuperKick", 10, PokeType1::Fighting);
	Ability Bite = Ability("Bite", 8, PokeType1::Poison);
	Ability Desert = Ability("Desert", 9, PokeType1::Ground);
	Ability HorseKick = Ability("HorseKick", 12, PokeType1::Flying);
	Ability Confusion = Ability("Confusion", 2, PokeType1::Psychic);
	Ability Chenapan = Ability("Chenapan", 5, PokeType1::Bug);
	Ability HeadButt = Ability("HeadButt", 15, PokeType1::Rock);
	Ability Cross = Ability("Cross", 10, PokeType1::Ghost);
	Ability Drake = Ability("Drake", 7, PokeType1::Dragon);
	Ability Copycat = Ability("Copycat", 4, PokeType1::Dark);
	Ability Mioumiou = Ability("Mioumiou", 5, PokeType1::Steel);
	Ability Stardust = Ability("Stardust", 10, PokeType1::Fairy);

	vector<Ability> AllAbilities = { Charge, Growl, RazorLeaf, Electricity, TailWhip, SuperKick, Bite, Desert, HorseKick, Confusion, Chenapan, HeadButt, Cross, Drake, Copycat, Mioumiou, Stardust };
};



