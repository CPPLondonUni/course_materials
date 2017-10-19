#include "fib.hpp"

std::vector<int> fib(int n, int seed1, int seed2)
{
    std::vector<int> output;
    output.push_back(seed1);
    output.push_back(seed2);

    for (int i = 2; i < n; i++) {
        const int last1 = output[i - 2];
        const int last2 = output[i - 1];
        output.push_back(last1 + last2);
    }

    return output;
}
