#include "Pokemon.h"
using namespace std;




Pokemon::Pokemon(string name, string pokedex)
{
    mName = name;
    mDescription = "Yapee";
    mLifepoints = 10;
   //mImage =?
   //mCapabilities = ?
}
Pokemon::Pokemon() {}

string Pokemon::Getname() { return mName; }

string Pokemon::Getpokedex() { return mDescription; }

//string Pokemon::Getimage() { return mFirstName + ’ ‘ + mLastName; }

//void Pokemon::Setcapabilities(float average) { mAverage = average; }

//void Student::SetClass(string newClass) { mClass = newClass; }

int main() 
{

}