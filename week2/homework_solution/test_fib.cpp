
#include "fib.hpp"

#include <iostream>

int main()
{
    {
        const std::vector<int> required = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
        const auto result = fib(10);

        if (result != required) {
            std::cerr << "Error: call to fib(10) did not match expected result\n";
            return 1;
        }
    }

    {
        const std::vector<int> required = {2, 4, 6, 10, 16, 26, 42, 68, 110, 178};
        const auto result = fib(10, 2, 4);

        if (result != required) {
            std::cerr << "Error: call to fib(10, 2, 4) did not match expected result\n";
            return 1;
        }
    }
}
