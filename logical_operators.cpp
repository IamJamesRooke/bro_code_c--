#include <iostream>

int main() {

    // && and
    // || or
    // ! reverse operand

    int temp;
    bool sunny = true;

    std::cout << "TEMP: ";
    std::cin >> temp;

    if (temp > 0 && temp << 30){
        std::cout << "GOOD";
    } else{
        std::cout << "BAD";
    }

    if(!sunny){
        std::cout << "CLOUDY";
    } else {
        std::cout << "SUNNY";
    }


    return 0;
}