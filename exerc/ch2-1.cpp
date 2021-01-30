#include <iostream>

int main() {

    const float pi {3.14f};
    float radius {};
    float area {};

    std::cout << "Give radius of a circle in centimeters: ";
    std::cin >> radius;

    area = pi * radius * radius;

    std::cout << "Radius of the circle is " << area << " cm" << std::endl;
}