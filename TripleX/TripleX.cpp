#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    std::cout << "\nYou are a secret agent breaking into a level " << Difficulty;
    std::cout << " secure server room... \nEnter the correct code to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << " - There are 3 numbers in the code\n";
    std::cout << " - The codes add-up to: " << CodeSum << std::endl;
    std::cout << " - The codes multiply to: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << " - You entered: " << GuessA << " " << GuessB << " " << GuessC << " \n";

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nCorrect Code\n";
        return true;
    }
    else
    {
        std::cout << "\nWrong Code\n";
        return false;
    }
}

int main()
{
    srand(time(NULL));
    
    int LevelDifficulty = 1;
    const int MaxLevel = 6;
    while (LevelDifficulty <= MaxLevel)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); //Clear any errors
        std::cin.ignore(); //Discart the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }

    std::cout << "\nYou've scaped\n";
    return 0;
}