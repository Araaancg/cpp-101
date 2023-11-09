#include <iostream>
#include <numeric>

std::string getAlphabet(char base) {
    const int size = 26;
    std::string alphabet(size, ' ');

    std::iota(std::begin(alphabet), std::end(alphabet), base);

    return alphabet;
};

std::string encryptCesar(std::string message, int position, bool encrypt) {
    std::string alphabet = getAlphabet('a');
    std::string encryptedMsg;
    
    for (int i = 0; i < message.length(); i++) {
        int alphPosition = (alphabet.find(message[i])) + (encrypt ? position : -position);
        int toShift;

        if (alphPosition < 0) {
            toShift = alphabet.length() + alphPosition;
        }
        else if (alphPosition > alphabet.length()) {
            toShift = alphPosition - alphabet.length();
        }
        else {
            toShift = alphPosition;
        };
        encryptedMsg += alphabet[toShift];
    };

    return encryptedMsg;
};

int main() {

    std::string message;
    int position;
    std::string newMessage;
    std::string userDecision;
    bool isEncrypted;

    std::cout << "Do you want to encrypt (y/n): ";
    std::cin >> userDecision;
    isEncrypted = userDecision == "n" ? false : true;

    std::cout << "Introduce your message: ";
    std::cin >> message;
    std::cout << "Introduce how many positions should the alphabet shift: ";
    std::cin >> position;

    newMessage = encryptCesar(message, position, isEncrypted);
    std::cout << "Your message is: " << newMessage << std::endl;

    return 0;
}
