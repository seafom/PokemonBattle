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
	string nImage;
	int mLifepoints;
	list<string> mAbilities;

public:
	Pokemon();
	Pokemon(std::string name);
	Pokemon(std::string name, std::string description, std::string image);

	std::string Getname();
	std::string GetDescription();
	std::string Getimage();
	int Getlifepoints();
	void Setcapabilities(string newClass);
	
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
