#include <iostream>

int main()
{
    int k = 2;
    int *pk = &k;
    std::cout << "k = " << k << std::endl;
    std::cout << "*pk = " << *pk << std::endl;
}

