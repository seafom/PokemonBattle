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
	int mMaxLife
		//4 Abilities
	vector<Ability> mAbilities;

public:
	Pokemon(string Name, string Description, PokeType1 mPokeType, int Level, int Lifepoints, vector<Ability> mAbilities);

	string Getname();
	string GetDescription();
	string Getimage();
	int Getlifepoints();
	void Setcapabilities(string newClass);

};


Pokemon Rattata("Rattata", 25, 100, PokeType1::Normal, "Charge");
Pokemon Charmander("Charmander", 25, 100, PokeType1::Fire, "");
Pokemon Carapuce("Carapuce", 25, 100, PokeType1::Water, "");
Pokemon Germignon("Germignon", 25, 100, PokeType1::Grass, "");
Pokemon Pikachu("Pikachu", 25, 100, PokeType1::Electric, "");
Pokemon Goupix("Goupix", 25, 100, PokeType1::Ice, "");
Pokemon KickLee("KickLee", 25, 100, PokeType1::Fighting, "");
Pokemon Abo("Abo", 25, 100, PokeType1::Poison, "");
Pokemon Sablaireau("Sablaireau", 25, 100, PokeType1::Ground, "");
Pokemon Chenipan("Chenipan", 25, 100, PokeType1::Flying, "");
Pokemon Nucleos("Nucleos", 25, 100, PokeType1::Psychic, "");
Pokemon Chenipan("Chenipan", 25, 100, PokeType1::Bug, "");
Pokemon Kranidos("Kranidos", 25, 100, PokeType1::Rock, "");
Pokemon Toutombe("Toutombe", 25, 100, PokeType1::Ghost, "");
Pokemon Draco("Draco", 25, 100, PokeType1::Dragon, "");
Pokemon Chacripain("Chacripan", 25, 100, PokeType1::Dark, "");
Pokemon Miaouss("Miaouss", 25, 100, PokeType1::Steel, "");
Pokemon Togepi("Togepi", 25, 100, PokeType1::Fairy, "");


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





