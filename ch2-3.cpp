#include <iostream>

int main() {

    const unsigned inch_to_feet { 12 };

    unsigned int length {};
    unsigned int feet {};
    unsigned int inches {};

    std::cout << "Enter a length in inches: ";
    std::cin >> length;

    length = static_cast<unsigned int>(length);

    feet = length / inch_to_feet;
    inches = length % inch_to_feet;

    std::cout   << "Inches in feet: " << feet
                << " and remaining inches: " << inches
                << std::endl;

}