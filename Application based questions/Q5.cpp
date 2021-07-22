#include <stdio.h>
#include <conio.h>
#include <iostream>

int main() {
    // 1st statement
    int A = 20;
    ++A;
    std::cout << A;

    // 2nd statement
    int B = 20;
    B++;
    std::cout << "\n" << B;

    // Yes result will be same because in both the statements we first increase the value then print it.
}