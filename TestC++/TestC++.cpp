
#include <iostream>

using namespace std;

//cin = store anything typed in 
//cout display a text

int main()
{
   
    cout << "What is your name" << endl;  //Display a text
    string name; //Create the answer
    cin >> name; // Store anything typed in answer
    cout << "Hello" << name << ", how are you today" << endl;

    int x = 12;
    cout << "The Value" << x << "is stored in" << &x << endl;
    cout << "The Value" << name << "is stored in" << &name << endl;

    
}

