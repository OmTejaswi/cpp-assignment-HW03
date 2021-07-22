#include <stdio.h>
#include <conio.h>
#include <iostream>

int main() {
    int a,b,c;
    std::cout << "Enter the height of triangle: ";
    std::cin >> a;

    std::cout << "Enter the base of triangle: ";
    std::cin >> b;

    std::cout << "Enter the hypotenuse of triangle: ";
    std::cin >> c;


    if (a*a + b*b == c*c)
    {
        std::cout << "Yes, this is a right angles triangle";
    } else {
        std::cout << "No, this is not a right angles triangle";
    }
    

}