#include <stdio.h>
#include <conio.h>
#include <iostream>

int main() {
    int ana, log, gk;
    std::cout << "Enter the marks obtained in Analytical paper: ";
    std::cin >> ana;

    std::cout << "Enter the marks obtained Logical paper: ";
    std::cin >> log;

    std::cout << "Enter the marks obtained in General Knowledge paper: ";
    std::cin >> gk;

    if(ana > 50 || log > 50 || gk > 50) {
        std::cout << "Please enter a number less than 50";
    } else if(ana <= 50 || log <= 50 || gk <= 50) {
        std::cout << "The weighted marks are: " << 0.4*ana+0.3*log+0.3*gk;
    }

}