#include <iostream>

int main() {

    // int month;

    // std::cout << "Month (1-3): ";
    // std::cin >> month;

    // switch (month) {
    //     case 1:
    //         std::cout << "January";
    //         break;
    //     case 2:
    //         std::cout << "February";
    //         break;
    //     case 3:
    //         std::cout << "March";
    //         break;
    //     default:
    //         std::cout << "Other";
    //         break;
    // }

    char grade;

    std::cout << "Grade: ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "A";
            break;
        case 'B':
            std::cout << "B";
            break;
        case 'C':
            std::cout << "C";
            break;
        default:
            std::cout << "Other";
            break;
    }


    return 0;
}