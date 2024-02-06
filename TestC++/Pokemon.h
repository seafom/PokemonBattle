#pragma once
#ifndef POKEMON_H
#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

class Pokemon
{
private:
	std::string mName;
	std::string mDescription;
	enum mPokeType;
	int mLevel;
	int mLifepoints;
	//4 Abilities
	list<string> mAbilities;

public:
	Pokemon();
	Pokemon(string name);
	Pokemon(string name, std::string description);

	string Getname();
	string GetDescription();
	string Getimage();
	int Getlifepoints();
	void GetAbilities(string newClass);
};




//class Capabilities {
//public:
	//Capabilities()


//private:
	//std::string name;
	//int power;
//};
#endif


//#ifndef STUDENT_H
//#define STUDENT_H
//class Student {
//private:
	//float mAverage;
	//string mStudentId;
	//string mFirstName;
	//string mLastName;
	//string mClass;

//public:
	//Student(string name, string id);
	//~Student();
	//string GetStudentId();
	//float GetAverage();
	//string GetFullName();
	//void SetAverage(float average);
	//void SetClass(string newClass);

//};
//#endif
