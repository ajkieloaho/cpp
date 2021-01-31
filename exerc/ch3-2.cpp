#include <iostream>

int main () {
    double length_shelf{};      // feet
    double depth_shelf{};       // feet
    int depth_box{};            // inches

    int feet_to_inches{12};     // one foot is 12 inches

    long result{};

    std::cout << "Give length of a shelf (feet): ";
    std::cin >> length_shelf;
    
    length_shelf *= feet_to_inches;     // inches

    std::cout << "Give depth of a shelf (feet): ";
    std::cin >> depth_shelf;
    
    depth_shelf *= feet_to_inches;      // inches

    std::cout << "Give length of a box (inches): ";
    std::cin >> depth_box;

    result = static_cast<long>(depth_shelf / depth_box) * static_cast<long>(length_shelf / depth_box);

    std::cout << "Shelf takes " << result
    << " boxes." << std::endl;
}