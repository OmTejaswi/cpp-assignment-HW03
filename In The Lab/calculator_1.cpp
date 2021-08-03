#include <stdio.h>
#include <conio.h>
#include <typeinfo>
#include <iostream>
int main()
{
    float num1;
    float num2;
    char op;
    float result;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    //    std::cout << typeid(num1).name();

    std::cout << "Enter the operation you want to preform (+, -, *, /, %): ";
    scanf(" %c", &op);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << result;
        // printf(typeid(op).name());
        break;
    case '-':
        result = num1 - num2;
        std::cout << result;
        break;
    case '*':
        result = num1 * num2;
        std::cout << result;
        break;
    case '/':
        result = num1 / num2;
        std::cout << result;
        break;
    case '%':
        result = (int)num1 % (int)num2;
        std::cout << "~ " << result;
        break;

    default:
        printf("The operator is not valid");
        break;
    }
}