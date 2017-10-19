#include "point.hpp"

#include <cassert>

int main()
{
    const point p{3, 4};
    const point q{1, 2};

    assert(p == p);
    assert(p != q);

    assert(p + q == (point{4, 6}));
    assert(p - q == (point{2, 2}));

    point r = {};
    r += p;
    assert(r == p);

    r -= p;
    assert(r == (point{0, 0}));

    std::cout << "Point p is " << p << '\n';
}