#include <iostream>

int main() {

    int age;
    std::cout << "Age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "Adult";
    } 
    else if (age > 12)
    {
        std::cout << "Teen";
    } 
    else if (age > 0){
        std::cout << "Child";
    } else {
        std::cout << "Unborn";
    }
    

    return 0;
}