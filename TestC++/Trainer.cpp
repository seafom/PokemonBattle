#include <iostream>
#include <string>
#include "Trainer.h" 



Trainer::Trainer(string FirstName, string LastName, string CatchPhrase, int Money, int NumberPokeballs)
{
    mFirstName = FirstName;
    mLastName = LastName;
    mCatchPhrase = CatchPhrase;
    mMoney = Money;
    mNumberPokeballs = NumberPokeballs;
};

int main() {

    //Trainer(string mFirstName, string mLastName, string mCatchPhrase, int mMoney, int mNumberPokeballs);

    Trainer trainer1("Lili", "Lou", "Gotta catch them all!", 100, 6);
    Trainer trainer2("Garry", "Gar", "Let's go!", 200, 4);

    std::cout << "Trainer 1:" << std::endl;
    std::cout << "First Name: " << trainer1.GetFirstName() << std::endl;
    std::cout << "Last Name: " << trainer1.GetLastName() << std::endl;
    std::cout << "Catch Phrase: " << trainer1.GetCatchPhrase() << std::endl;
    std::cout << "Money: " << trainer1.GetMoney() << std::endl;
    std::cout << "Number of Pokeballs: " << trainer1.GetNumberPokeballs() << std::endl;

    std::cout << std::endl; 

    // Second trainer
    std::cout << "Trainer 2:" << std::endl;
    std::cout << "First Name: " << trainer2.GetFirstName() << std::endl;
    std::cout << "Last Name: " << trainer2.GetLastName() << std::endl;
    std::cout << "Catch Phrase: " << trainer2.GetCatchPhrase() << std::endl;
    std::cout << "Money: " << trainer2.GetMoney() << std::endl;
    std::cout << "Number of Pokeballs: " << trainer2.GetNumberPokeballs() << std::endl;

    return 0;
}