
#include <iostream>

using namespace std;

//cin = store anything typed in 
//cout display a text
//endl saute une ligne 

void EarnMoneyByPointer(int* wallet, int wage)
{
    //change the int value at adress wallet, pointing to money
    *wallet += wage;
    *wallet -= wage / 4;
}


void EarnMoneyByRef(int& wallet, int wage)
{
    //change the int value at adress wallet, pointing to money
    wallet += wage;
    wallet -= wage / 4;
}


int main()
{
   
    cout << "What is your name" << endl; //Display a text
    string name; //Create the answer
    cin >> name; // Store anything typed in answer
    cout << "Hello" << name << ", how are you today" << endl; //Display a text


    int money = 1000;
    int* bankAccount = &money; //bankAccount is the adress of the money

    cout << "The Value" << money << "is stored in" << &money << endl;
    cout << "You can find my money a this adress : " << bankAccount << endl;
    cout << "You can find my money a this adress : " << &bankAccount << endl;

    EarnMoneyByPointer(bankAccount, 10000);
    EarnMoneyByRef(money, 100);
    EarnMoneyByRef(*bankAccount, 100);
    cout << "Thank you for the 10 000, now I have " << money;
}

