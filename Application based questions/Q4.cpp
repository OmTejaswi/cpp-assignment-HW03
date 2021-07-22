#include <stdio.h>
#include <conio.h>
#include <iostream>

int main() {
    int A = 10, B = 20;
    int C = A > 5 && B != 10; //I'm prettey sure that output will be 1 because in programming "1" means true and since, both the conditions are ture so "int C will return 1.
    int D = B < 10 || A == 5; //This will return 0 since, not a single conditions are true in 0 means false so output will 0;
    std::cout << "C = " << C << ", D = " << D;
}