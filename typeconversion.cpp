#include <iostream>

int main() {
    
    // int x = 3.15; // INTs truncate the decimal
    // double x = (int) 3.14;
    
    int correct = 8;
    int questions = 10;
    double score = correct/(double) questions * 100;

    std::cout<< score << "%";

    
    
    return 0;
}