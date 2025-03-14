#include <iostream>

int main() {
    
    int x; // declaration
    x = 5; // assignment

    int y = 10; // declaration and assignment

    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    // whole numbers
    int age = 21;
    int year = 2023;

    std::cout << age << '\n';
    std::cout << year << '\n';

    // double
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << price << '\n';
    
    // single char
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    std::cout << initial << '\n';

    // boolean
    bool student = true;
    bool power = false;
    bool for_sale = true;

    // string
    std::string name = "Bro";

    std::string food = "pizza";
    std::string address = "123 Fake Street";


    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old." << '\n';

    
    return 0;
}