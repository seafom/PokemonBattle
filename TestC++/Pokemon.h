#pragma once
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
	int mMaxLife;
	vector<Ability> mAbilities;

public:
	Pokemon(string Name, string Description, PokeType1 mPokeType, int Level, int Life, int mMaxLife);

	string Getname();
	string GetDescription();
	PokeType1 mPokeType();
	int Level();
	int Life();
	int MaxLife();
	vector<Pokemon> AllPokemons();
};





//TRAINER
class Trainer
{
private:
	string mFirstName;
	string mLastName;
	string mCatchPhrase;
	int mMoney;
	//UP TO 6 POKEMON
	int mNumberPokeballs;

public:
	Trainer(string mFirstName, string mLastName, string mCatchPhrase, int mMoney, int mNumberPokeballs);

	string GetFirstName();
	string GetLastName();
	string CatchPhrase();
	int GetMoney();
	int GetNumberPokeballs();

};





