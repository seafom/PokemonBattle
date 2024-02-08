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
	float mDamageAmount;
	string mName1;
	PokeType mPoketype;

public:
	Ability(string mName1, float DamageAmount, PokeType1 mPoketype);
	string GetName();
	float GetDamageAmount();
	PokeType GetPokeType();

};