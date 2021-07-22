#include <stdio.h>
#include <conio.h>
#include <iostream>

int main() {
    int p,r,t;
    std::cout << "Enter the Principal amount: ";
    std::cin >> p;

    std::cout << "Enter the Rate of Interest: ";
    std::cin >> r;

    std::cout << "Enter Time in years: ";
    std::cin >> t;

    std::cout << "SI: " << (p*r*t)/100;
}