#include <iostream>
#include <cmath>

int main() {

    const unsigned inch_to_feet { 12 };

    unsigned int dist_feet {};
    unsigned int dist_inches {};
    unsigned int distance {};
    unsigned int height {};
    unsigned int angle {};
    double result_inches {};

    unsigned int feet {};
    unsigned int inches {};

    std::cout << "Enter first a distance to the object in feet and incehes.\n";
    
    std::cout << "Enter feet: ";
    std::cin >> dist_feet;
    
    std::cout << "Enter inches: ";
    std::cin >> dist_inches;

    std::cout << "Enter your observing height in inches: ";
    std::cin >> height;

    std::cout << "Enter measured angle in degrees: ";
    std::cin >> angle;

    distance = dist_feet * inch_to_feet + dist_inches;

    result_inches = height + distance * std::tan(angle);

    feet = result_inches / inch_to_feet;
    //inches = result_inches % inch_to_feet;

    std::cout   << "Heigt of an object in feet is: " << feet
                << std::endl;


    return 0;
}