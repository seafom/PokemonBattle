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



