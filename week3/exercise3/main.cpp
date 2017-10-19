#include "line.hpp"

#include <cassert>

int main()
{
    {
        line l{};
    }
    
    const point start{1, 2};
    const point end{3, 4};

    line l{start, end};
    assert(l.start == start);
    assert(l.end == end);

    line l2 = l;
    assert(l2.start == start);
    assert(l2.end == end);

    l = l2;
    assert(l2.start == start);
    assert(l2.end == end);
}