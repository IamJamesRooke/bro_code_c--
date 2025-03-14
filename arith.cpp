#include <iostream>


int main() {

    int students = 20;
    students += 1;
    students *= 2;
    students++;
    students--;
    students -= 10;

    students /= 2; // decimal truncated 
    students %= 5;


    std::cout << students;

    return 0;
}