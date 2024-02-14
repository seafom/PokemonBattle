#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include "Ability.h"

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
	string GetCatchPhrase();
	int GetMoney();
	int GetNumberPokeballs();




};
