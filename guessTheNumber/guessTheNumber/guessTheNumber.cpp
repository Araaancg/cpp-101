// programm tries to guess user's number  in less than 7 steps
#include <iostream>


int main()
{
    std::cout << "Think of a number between 1 and 100. When you have it, press enter. ";
    std::cin.ignore();

    int minLimit = 0;
    int maxLimit = 100;
    int guessedNumber;
    bool correctNumber = false;
    char userAnswer;
    char isBigger;

    while (!correctNumber) {
        guessedNumber = minLimit + ((maxLimit - minLimit) / 2);
        std::cout << "Is your number " << guessedNumber << "? (y/n): ";
        std::cin >> userAnswer;

        if (userAnswer == 'y') {
            correctNumber = true;
        }
        else {
            correctNumber = false;
            std::cout << "Is your number bigger? (y/n): ";
            std::cin >> isBigger;
            if (isBigger == 'y') {
                minLimit = guessedNumber;
            }
            else {
                maxLimit = guessedNumber;
            }
        };
    };
    return 0;
}

