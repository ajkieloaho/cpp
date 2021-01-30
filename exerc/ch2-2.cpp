#include <iostream>
#include <iomanip>

int main() {

    const double pi { 3.1415926535897932384626433832795028 };
    
    double radius {};
    int precision {};
    double area {};

    std::cout << "Give radius of a circle in centimeters: ";
    std::cin >> radius;

    std::cout << "Give precision of an output: ";
    std::cin >> precision;

    area = pi * radius * radius;

    std::cout   << "Radius of the circle is "
                << area
                << " cm"
                << std::fixed
                << std::setprecision(precision)
                << std::endl;
}