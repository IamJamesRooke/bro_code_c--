#include <iostream>

int main() {

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "**********CALCULATOR**********\n";

    std::cout << "NUM 1: ";
    std::cin >> num1;

    std::cout << "(+ - * /): ";
    std::cin >> op;

    std::cout << "NUM 2: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        std::cout << num1 + num2 << '\n';
        break;
    case '-':
        std::cout << num1 - num2 << '\n';
        break;
    case '*':
        std::cout << num1 * num2 << '\n';
        break;
    case '/':
        std::cout << num1 / num2 << '\n';
        break;
    
    default:
        std::cout << "INVALID" << '\n';
        break;
    }
    




    std::cout << "******************************";


    return 0;
}