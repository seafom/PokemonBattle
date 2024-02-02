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
	std::string mName;
	std::string mDescription;
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
	int numberpokeballs

public:
	Trainer();
	Trainer(string firstName, string lastName, string catchPhrase, float money, int numberpokeballs);

	string GetFirstName();
	string GetLastName();
	float GetMoney();
	float GetLifePoints();
};


class Ability 
{
private :
	float mDamage;

public :
	Ability();
	Ability();

//POKETYPE
enum class PokeType
{
	Water,
	Grass,
	Ice,
	Plant,
	Insect
};





