#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {

    // using namespace std;
    using namespace::first;
    
    int x = 0;

    std::cout << first::x << '\n';
    std::cout << second::x << '\n';
    
    return 0;
}