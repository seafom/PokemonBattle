#include "Pokemon.h"
#include <string>
#include <iostream>
#include <vector>
#include "PokeType.h"
#include "Ability.h"
#include "AllPokemons.h"
#include <iostream>
#include <string>
#include "Trainer.h"


//cin = store anything typed in 
//cout display a text
//endl saute une ligne 

using namespace std;

//POKEMON
Pokemon::Pokemon(string Name, string Description, PokeType1 mPokeType, int Level, int Life)
{
    mName = Name;
    mDescription = Description;
    mLevel = Level;
    mLife = Life;

    //string Getname();
    //string GetDescription();
    //PokeType1 mPokeType();
    //int GetLevel();
    //int GetLife();
}


// POKEMON ABILITY
Ability::Ability(string AttackName, int DamageAmount, PokeType1 mPoketype)
{
    mAttackName = AttackName;
    mDamageAmount = DamageAmount;
    PokeType1 mPokeType;
    vector<Ability> AllAbilities;
}




int main()
{
    std::cout << "Hello !" << std::endl;
    std::cout << " =================================== " << std::endl;
    std::cout << "  Welcome to Pokemon Battle Arena  " << std::endl;
    std::cout << " =================================== " << std::endl;

    Trainer trainer1("Lili", "Lou", "Gotta catch them all!", 100, 6);
    Trainer trainer2("Garry", "Gar", "Let's go!", 200, 4);
    // The Player Choose The Trainer
    std::cout << "Choose a Trainer:" << std::endl;
    std::cout << "1. " << trainer1.GetFirstName() << " " << trainer1.GetLastName() << std::endl;
    std::cout << "2. " << trainer2.GetFirstName() << " " << trainer2.GetLastName() << std::endl;

    int choice;
    std::cout << "Enter the number of the Trainer you want to choose: ";
    std::cin >> choice;

    // Validate the choice (1)
    if (choice == 1) {
        std::cout << "You chose Trainer 1." << std::endl;
    }
    else if (choice == 2) {
        std::cout << "You chose Trainer 2." << std::endl;
    }
    else {
        std::cout << "Invalid choice. Please choose a valid Trainer." << std::endl;
        return 1;
    }

    Pokemon Rattata = Pokemon("Rattata", "I'm a Rat", PokeType1::Normal, 50, 105);
    Pokemon Charmander = Pokemon("Charmander", "I'm a", PokeType1::Fire, 13, 60);
    Pokemon Carapuce = Pokemon("Charmander", "I'm a", PokeType1::Fire, 13, 60);
    Pokemon Germignon = Pokemon("Germignon", "I'm Germignon", PokeType1::Grass, 5, 25);
    Pokemon Pikachu = Pokemon("Pikachu", "I'm Pikachu", PokeType1::Electric, 20, 100);
    Pokemon Goupix = Pokemon("Goupix", "I'm Goupix", PokeType1::Ice, 10, 50);
    Pokemon KickLee = Pokemon("KickLee", "I'm Kicklee", PokeType1::Fighting, 7, 25);
    Pokemon Abo = Pokemon("Abo", "I'm Abo", PokeType1::Poison, 4, 14);
    Pokemon Sablaireau = Pokemon("Sablaireau", "I'm Sablaireau", PokeType1::Ground, 8, 18);
    Pokemon Arceus = Pokemon("Arceus", "I'm Arceus", PokeType1::Flying, 10, 51);
    Pokemon Nucleos = Pokemon("Nucleos", "I'm Nucleos", PokeType1::Psychic, 7, 23);
    Pokemon Chenipan = Pokemon("Chenipan", "I'm Chenipan", PokeType1::Bug, 12, 30);
    Pokemon Kranidos = Pokemon("Kranidos", "I'm Kranidos", PokeType1::Rock, 4, 20);
    Pokemon Toutombe = Pokemon("Toutombe", "I'm Toutombe", PokeType1::Ghost, 5, 10);
    Pokemon Draco = Pokemon("Draco", "I'm Draco", PokeType1::Dragon, 10, 31);
    Pokemon Chacripain = Pokemon("Chacripain", "I'm Chacripain", PokeType1::Dark, 12, 31);
    Pokemon Miaouss = Pokemon("Miaouss", "I'm Miaouss", PokeType1::Steel, 70, 50);
    Pokemon Togepi = Pokemon("Togepi", "I'm Togepi", PokeType1::Fairy, 20, 42);

    vector<Pokemon> AllPokemons = { Rattata, Charmander, Carapuce, Germignon, Pikachu, Goupix, KickLee, Abo, Sablaireau, Arceus, Nucleos,
    Chenipan, Kranidos, Toutombe, Draco, Chacripain, Miaouss, Togepi };


    std::cout << "1. " << Rattata.Getname() << " " << Rattata.GetDescription() << " " << Rattata.GetPokeType() << " " << Rattata.GetLevel() << " " << Rattata.GetLife() << "." << std::endl;
    std::cout << "2. " << Charmander.Getname() << " " << Charmander.GetDescription() << " " << Charmander.GetPokeType() << " " << Charmander.GetLevel() << " " << Charmander.GetLife() << "." << std::endl;
    std::cout << "3. " << Carapuce.Getname() << " " << Carapuce.GetDescription() << " " << Carapuce.GetPokeType() << " " << Carapuce.GetLevel() << Carapuce.GetLife() << "." << std::endl;
    std::cout << "4. " << Germignon.Getname() << " " << Germignon.GetDescription() << " " << Germignon.GetPokeType() << " " << Germignon.GetLevel() << " " << Germignon.GetLife() << "." << std::endl;
    std::cout << "5. " << Pikachu.Getname() << " " << Pikachu.GetDescription() << " " << Pikachu.GetPokeType() << " " << Pikachu.GetLevel() << " " << Pikachu.GetLife() << "." << std::endl;
    std::cout << "6. " << Goupix.Getname() << " " << Goupix.GetDescription() << " " << Goupix.GetPokeType() << " " << Goupix.GetLevel() << Goupix.GetLife() << "." << std::endl;
    std::cout << "7. " << KickLee.Getname() << " " << KickLee.GetDescription() << " " << KickLee.GetPokeType() << " " << KickLee.GetLevel() << " " << KickLee.GetLife() << std::endl;
    std::cout << "8. " << Abo.Getname() << " " << Abo.GetDescription() << " " << Abo.GetPokeType() << " " << Abo.GetLevel() << " " << Abo.GetLife() << "." << std::endl;
    std::cout << "9. " << Sablaireau.Getname() << " " << Sablaireau.GetDescription() << " " << Sablaireau.GetPokeType() << " " << Sablaireau.GetLevel() << " " << Sablaireau.GetLife() << "." << std::endl;
    std::cout << "10. " << Arceus.Getname() << " " << Arceus.GetDescription() << " " << Arceus.GetPokeType() << " " << Arceus.GetLevel() << " " << Arceus.GetLife() << "." << std::endl;
    std::cout << "11. " << Nucleos.Getname() << " " << Nucleos.GetDescription() << " " << Nucleos.GetPokeType() << " " << Nucleos.GetLevel() << " " << Nucleos.GetLife() << "." << std::endl;
    std::cout << "12. " << Chenipan.Getname() << " " << Chenipan.GetDescription() << " " << Chenipan.GetPokeType() << " " << Chenipan.GetLevel() << " " << Chenipan.GetLife() << "." << std::endl;
    std::cout << "13. " << Kranidos.Getname() << " " << Kranidos.GetDescription() << " " << Kranidos.GetPokeType() << " " << Kranidos.GetLevel() << " " << Kranidos.GetLife() << "." << std::endl;
    std::cout << "14. " << Toutombe.Getname() << " " << Toutombe.GetDescription() << " " << Toutombe.GetPokeType() << " " << Toutombe.GetLevel() << " " << Toutombe.GetLife() << "." << std::endl;
    std::cout << "15. " << Draco.Getname() << " " << Draco.GetDescription() << " " << Draco.GetPokeType() << " " << Draco.GetLevel() << " " << Draco.GetLife() << "." << std::endl;
    std::cout << "16. " << Chacripain.Getname() << " " << Chacripain.GetDescription() << " " << Chacripain.GetPokeType() << " " << Chacripain.GetLevel() << Chacripain.GetLife() << "." << std::endl;
    std::cout << "17. " << Miaouss.Getname() << " " << Miaouss.GetDescription() << " " << Miaouss.GetPokeType() << " " << Miaouss.GetLevel() << " " << Miaouss.GetLife() << "." << std::endl;
    std::cout << "18. " << Togepi.Getname() << " " << Togepi.GetDescription() << " " << Togepi.GetPokeType() << " " << Togepi.GetLevel() << " " << Togepi.GetLife() << "." << std::endl;
    std::cout << std::endl;

    // The Player Choose The Pokemon He Wants
    std::cout << "Choose One Pokemon" << std::endl;
    int choice1;
    std::cout << "Enter the number of the Pokemon you want to choose: ";
    std::cin >> choice1;
    std::cout << "You chose Pokemon number : " << choice1 << "." << std::endl;

    // Validate the choice (1)
    if (choice1 >= 1  && choice1 <= 18) {
        std::cout << "You chose Trainer 1." << std::endl;
    }
    else 
    {
        std::cout << "Invalid choice. Please choose a valid number for Pokemon." << std::endl;
        return 1;
    }

    
}

//Battle
void battle(Trainer& trainer1, Trainer& trainer2)
{
    Trainer trainer1("Lili", "Lou", "Gotta catch them all!", 100, 6);
    Trainer trainer2("Garry", "Gar", "Let's go!", 200, 4);

    // Allow each trainer to select one of their Pokémon for battle
    int choice1, choice2;
    cout << "Trainer 1, choose your Pokemon (enter the number): ";
    cin >> choice1;
    cout << "Trainer 2, choose your Pokemon (enter the number): ";
    cin >> choice2;

    // Validate the choices
    if (choice1 < 1 || choice1 > trainer1.GetNumberPokeballs() || choice2 < 1 || choice2 > trainer2.GetNumberPokeballs())
    {
        cout << "Invalid Pokemon selection. Please choose again." << endl;
        return;
    }
}










