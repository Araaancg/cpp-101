#include <iostream>
#include <string>
#include <cctype>

char getDniLetter(int numbers) {

    std::string allDniLetters = "TRWAGMYFPDXBNJZSQVHLCKE";
    int searchNumber = numbers % 23;

    return allDniLetters[searchNumber];
};

bool validateUserInput(std::string userInput) {
    for (char c : userInput) {
        if (isalpha(c)) {
            return false;
        };
    };
    return true;
};

int main()
{   
    std::string strDniNumbers; // string variable declaration

    do {
        std::cout << "Input your DNI's numbers: ";
        std::cin >> strDniNumbers; // input

    } while (!validateUserInput(strDniNumbers));

    int intDniNumbers = std::stoi(strDniNumbers); // converting string to int

    std::cout << "You entered: " << intDniNumbers << std::endl;

    char dniLetter = getDniLetter(intDniNumbers);

    std::cout << "Your DNI letter is: " << dniLetter << std::endl;



}