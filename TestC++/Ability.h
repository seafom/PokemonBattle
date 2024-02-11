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
	string mAttackName;
	int mDamageAmount;
	PokeType1 mPoketype;
	vector<Ability> AllAbilities;

public:

	Ability(string mAttackName, int mDamageAmount, PokeType1 mPoketype);
	string GetAttackName();
	int GetDamageAmount();
	PokeType1 GetPokeType();
	vector<Ability> AllAbilities();

};



