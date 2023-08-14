#include <iostream>

int main()
{
    int number;

    std::cout << "Enter your favourite number between 1 and 100: ";
    std::cin >> number;
    std::cout << "Amazing!! That's my favourite number too!" << std::endl;
    std::cout << "No really, " << number << " it's my favourite number too!" << std::endl;
}