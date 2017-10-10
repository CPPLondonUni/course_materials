
#include <iostream>

int main()
{
    std::cout << "Please enter your name:\n";
    std::string name;
    std::cin >> name;

    if (name == "Tom" || name == "Phil" || name == "Tristan") {
        std::cout << "Hello " << name << "!\n";
    } else {
        std::cout << "Hello stranger!\n";
    }
}