#include <iostream>

int main() {

    double temp;
    char unit;

    std::cout << "***** TEMP CONVERSION *****\n";
    std::cout << "F = Farenheit\n";
    std::cout << "C = Celsius\n\n";
    
    std::cout << "CONVERSION UNIT: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "F: ";
        std::cin >> temp;
        
        temp = (1.8 * temp) + 32;
        std::cout << "C:" << temp << '\n';

    } else if (unit == 'C' || unit == 'c'){
        std::cout << "C: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "F: " << temp  << '\n';
    } else {
        std::cout << "INVALID\n";
    }

    std::cout << "*************************\n";

    return 0;
}