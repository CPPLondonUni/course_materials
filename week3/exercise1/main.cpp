#include "point.hpp"

#include <cassert>

int main()
{
    const point p{3, 4};
    const point q{1, 2};

    assert(p.equal_to(p));
    assert(!p.equal_to(q));

    assert(!p.not_equal_to(p));
    assert(p.not_equal_to((q)));
}