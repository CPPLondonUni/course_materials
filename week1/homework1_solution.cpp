#include <iostream>
#include <string>
#include <vector>

std::string say_hello(std::string name)
{
    const std::string hello = "Hello ";
    return hello + name;
}

int main()
{
    const std::vector<std::string> names = {"Tom", "Phil", "Tristan"};

    for (const auto name : names) {
        std::cout << say_hello(name) << '\n';
    }
}
