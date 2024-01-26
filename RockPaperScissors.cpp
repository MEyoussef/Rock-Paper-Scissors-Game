#include <iostream>
#include <string>
#include <windows.h>
int main()
{
    std::cout << "\n\n=======================\n\n";
    std::cout << "=== Rock Paper Scissors Game ===" << std::endl;
    std::cout << "\n=======================\n\n";

    int User_Input;
    srand(time(0));
    int Computer_Input = rand() % (3 - 1 + 1) + 1;
    std::string Your_Str = "";
    std::string Computer_Str = "";
    std::cout << "User Input [ 1 - 3 ] : ";
    std::cin >> User_Input;
    if (User_Input <= 0 || User_Input > 3)
    {
        std::cout << "Number Between [ 1 - 3 ] is Needed!" << std::endl;
        return 0;
    }
    // std::cout << User_Input << std::endl; // just testing floats
    else if (User_Input == 1)
    {
        Your_Str = "Scissors";
    }
    else if (User_Input == 2)
    {
        Your_Str = "Paper";
    }
    else if (User_Input == 3)
    {
        Your_Str = "Rock";
    }

    if (Computer_Input == 1)
    {
        Computer_Str = "Scissors";
    }
    else if (Computer_Input == 2)
    {
        Computer_Str = "Paper";
    }
    else if (Computer_Input == 3)
    {
        Computer_Str = "Rock";
    }
    std::cout << "You Choosed " << Your_Str << std::endl;
    std::cout << "Computer Choosed " << Computer_Str << std::endl
              << std::endl;
    std::cout << "=> Wait For Results";

    // [ ======================= ]

    Sleep(1000);
    std::cout << ".";
    Sleep(1000);
    std::cout << ".";
    Sleep(1000);
    std::cout << "." << std::endl;

    // [ ======================= ]

    if (Your_Str == Computer_Str)
    {
        std::cout << "Draw!";
    }
    else if (Your_Str == "Scissors" && Computer_Str == "Paper")
    {
        std::cout << "Player 1 Won!";
    }
    else if (Your_Str == "Scissors" && Computer_Str == "Rock")
    {
        std::cout << "Player 2 Won!";
    }
    else if (Your_Str == "Paper" && Computer_Str == "Scissors")
    {
        std::cout << "Player 2 Won!";
    }
    else if (Your_Str == "Paper" && Computer_Str == "Rock")
    {
        std::cout << "Player 2 Won!";
    }
    else if (Your_Str == "Rock" && Computer_Str == "Scissors")
    {
        std::cout << "Player 1 Won!";
    }
    else if (Your_Str == "Rock" && Computer_Str == "Paper")
    {
        std::cout << "Player 2 Won!";
    }
    return 0;
}