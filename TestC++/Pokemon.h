#include <iostream>
#include <vector>
#include <string>
#include <list>
#include "Ability.h"

using namespace std;

//POKEMON
class Pokemon
{
private:
	string mName;
	string mDescription;
	// Enmumeration PokeType
	PokeType1 mPokeType;
	int mLevel;
	int mLife;

public:
	Pokemon(string Name, string Description, PokeType1 PokeType, int Level, int Life);

	string Getname();
	string GetDescription();
	PokeType1 mPokeType();
	string GetPokeType();
	int GetLevel();
	int GetLife();
	
};









