#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;


//POKEMON
class Pokemon
{
private:
	string mName;
	string mDescription;
	// Enmumeration PokeType
	enum mPokeType;
	int mLevel;
	float mLifepoints;
	//4 Abilities
	list<string> mAbilities;

public:
	Pokemon();
	Pokemon(std::string name);
	Pokemon(std::string name, std::string description);

	string Getname();
	string GetDescription();
	string Getimage();
	int Getlifepoints();
	void Setcapabilities(string newClass);
};


//TRAINER
class Trainer 
{
private:
	string mFirstName;
	string mLastName;
	string mCatchPhrase;
	float mMoney;
	float mLifePoints;
	//UP TO 6 POKEMON
	int mNumberPokeballs;

public:
	Trainer();
	Trainer(string FirstName, string LastName, string CatchPhrase, float Money, int NumberPokeballs);

	string GetFirstName();
	string GetLastName();
	float GetMoney();
	float GetLifePoints();
};


class Ability
{
private:
	float mDamageAmount;

public:
	Ability(float DamageAmount) {};
};


//POKETYPE
enum class PokeType
{
	Normal,
	Fire,
	Water,
	Grass,
	Electric,
	Ice,
	Fighting,
	Poison,
	Ground,
	Flying,
	Psychic,
	Bug,
	Rock,
	Ghost,
	Dragon,
	Dark,
	Steel,
	Fairy
};





