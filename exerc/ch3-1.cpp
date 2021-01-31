#include <iostream>
#include <iomanip>

int main () {
    int input {};
   
    std::cout << "Give an integer: ";
    std::cin >> input;
    int inverted {~input};

    unsigned int hex_digits {2 * sizeof(int)};
    unsigned int hex_value_width {hex_digits + 2};
    unsigned int column_width {hex_value_width + 4};

    // columns heading
    std::cout << std::right << std::setw(column_width) << "value"
    << std::setw(column_width) << "~value" 
    << std::setw(column_width) << "~value+1"
    << std::endl;

    // output hexadecimals
    std::cout << std::hex << std::showbase << std::internal << std::setfill('0')
    << "    " << std::setw(hex_value_width) << input
    << "    " << std::setw(hex_value_width) << inverted
    << "    " << std::setw(hex_value_width) << inverted + 1
    << std::endl;

    std::cout << std::dec << std::right << std::internal << std::setfill(' ')
    << std::setw(column_width) << input
    << std::setw(column_width) << inverted
    << std::setw(column_width) << inverted + 1
    << std::endl;

}
