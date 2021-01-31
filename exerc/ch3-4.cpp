#include <iostream>
#include <iomanip>

int main () {

    char one;
    char two;
    char three;
    char four;

    int packed{0};

    std::cout << "first char: ";
    std::cin >> one;
    packed |= one << 24;

    std::cout << "second char: ";
    std::cin >> two; 
    packed |= two << 16;

    std::cout << "third char: ";
    std::cin >> three;
    packed |= three << 8;

    std::cout << "fourth char: ";
    std::cin >> four;
    packed |= four;

    std::cout << std::hex << std::setfill('0')
    << "packed chars are in hexadecimal: " 
    << std::setw(16) << packed << std::endl;

    one = static_cast<char>(packed);
    two = static_cast<char>(packed >> 8);
    three = static_cast<char>(packed >> 16);
    four = static_cast<char>(packed >> 24);

    std::cout
    << "fourth char: " << static_cast<char>(one)
    << "\nthird char: " << static_cast<char>(two)
    << "\nsecond char: " << static_cast<char>(three)
    << "\nfirst char: " << static_cast<char>(four)
    << std::endl;
}