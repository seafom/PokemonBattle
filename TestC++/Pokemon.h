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
	Pokemon(string Name, string Description, enum PokeType, int Level, float Lifepoints, list<string> mAbilities);

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
	Trainer(string FirstName, string LastName, string CatchPhrase, float Money, int NumberPokeballs);

	string GetFirstName();
	string GetLastName();
	float GetMoney();
	float GetLifePoints();

};





