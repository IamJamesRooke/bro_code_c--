#include <iostream>
#include <cmath>

int main() {
    
    // double x = 3;
    // double y = 4;
    // double z;

    // z = std::max(x, y);
    // z = std::min(x, y);
    // z = pow(3, 3);
    // z = sqrt(64);
    // z = abs(-3);
    // z = round(x);
    // z = ceil(3.6);
    // z = floor(3.6);

    // std::cout << z;

    // Hypotenuse of a triangle
    // c^2 = a^2 + b^2
    double a;
    double b;
    double c;

    std::cout<< "Side A: ";
    std::cin >> a;

    std::cout<< "Side B: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout<< "Side C: " << c;
    
    return 0;
}