
#include <iostream>
#include <string>

std::string say_hello(std::string name)
{
    const std::string hello = "Hello ";
    return hello + name;
}

int main()
{
    std::cout << say_hello("Tristan") << '\n';
}