#include "line.hpp"
#include "multiline.hpp"

#include <cassert>

void test_multiline_length()
{
    {
        const multiline m{};
        assert(m.length() == 0);
    }


    {
        const multiline m{{0, 0}, {3, 4}};
        assert(m.length() == 5);
    }

    {
        multiline m{};
        m.append({0, 0});
        m.append({3, 4});
        m.append({15, 9});
        m.append({12, 5});
        assert(m.length() == 23);
    }
}

void test_multiline()
{
    {
        const multiline m1 = {{0, 0}, {1, 1}};
        const multiline m2 = {{1, 1}, {0, 0}};

        assert(m1 == m1);
        assert(m1 != m2);
    }

    {
        const point p1 = {0, 0};
        const point p2 = {3, 4};
        multiline m{};
        m.append(p1);
        m.append(p2);

        assert(m.front() == p1);
        assert(m.back() == p2);
    }

    // std::cout << m1 << '\n';

    test_multiline_length();
}

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

    test_multiline();
}