#include <iostream>

int main() {
    const double kg_to_pounds { 2.2 };
    const double foot_to_m { 0.3048 };
    const unsigned inch_to_feet { 12 };

    unsigned int pounds {};
    double feet {};
    unsigned int inches {};

    double meters {};
    double kilograms {};

    double body_mass_index {};

    std::cout << "Enter first your weight in pounds: ";
    std::cin >> pounds;

    std::cout << "Enter then your height in feet and inches. \n";
    
    std::cout << "Enter feet: ";
    std::cin >> feet;

    std::cout << "Enter inches: ";
    std::cin >> inches;

    feet = inches / inch_to_feet + feet;
    meters = feet * foot_to_m;
    kilograms = pounds / kg_to_pounds;

    body_mass_index = kilograms / (meters * meters);

    std::cout   << "Your body mass index (BMI) is: " << body_mass_index
                << std::endl;
    
    return 0;
}