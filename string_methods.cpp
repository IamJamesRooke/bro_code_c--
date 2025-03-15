#include <iostream>

int main() {

    std::string name;
    std::cout <<  "Name: ";
    std::getline(std::cin, name);

    if (name.length() > 12){
        std::cout << "TOO LONG";
    } else{
        std::cout << "Welcome " << name;
    }

    // name.clear()
    // name.append()
    // name.at(0) = same thing as []
    // name.insert(0, "@")
    // name.find(' ') // Returns index of first white space.
    // name.erase(0, 3) // deltes index 0 to 3


}