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
        std::cout << "default constructor\n";
    }

    line(point s, point e)
        : start{s}, end{e}
    {
        std::cout << "start/end constructor\n";
    }

    line(const line& other)
        : start{other.start}, end{other.end}
    {
        std::cout << "copy constructor\n";
    }

    line& operator=(const line& other)
    {
        std::cout << "copy assignment\n";
        start = other.start;
        end = other.end;
        return *this;
    }

    ~line()
    {
        std::cout << "destructor\n";
    }

    point start;
    point end;
};

#endif //GEOMETRY_LINE_HPP
