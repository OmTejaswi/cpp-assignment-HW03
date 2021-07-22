#include <stdio.h>
#include <conio.h>
#include <iostream>

int main() {
    float side;
    std::cout << "Enter the length of 1 side of cube: ";
    std::cin >> side;

    std::cout << "Volume of cube is: " << side*side*side << " and surface area is: " << 6*(side*side);
}