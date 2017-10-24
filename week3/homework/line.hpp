//
// Created by Tristan Brindle on 17/10/2017.
//

#ifndef GEOMETRY_LINE_HPP
#define GEOMETRY_LINE_HPP

#include "point.hpp"

struct line {
    line()
        : start{0, 0}, end{0, 0}
    {
    }

    line(point s, point e)
        : start{s}, end{e}
    {
    }

    line(const line& other)
        : start{other.start}, end{other.end}
    {
    }

    line& operator=(const line& other)
    {
        start = other.start;
        end = other.end;
        return *this;
    }

    ~line()
    {
    }

    point start;
    point end;
};

#endif //GEOMETRY_LINE_HPP
