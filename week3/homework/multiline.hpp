//
// Created by Tristan Brindle on 24/10/2017.
//

#ifndef GEOMETRY_MULTILINE_HPP
#define GEOMETRY_MULTILINE_HPP

#include "point.hpp"

#include <iostream>
#include <vector>

struct multiline {

    multiline() {}

    multiline(const point& p1, const point& p2)
        : points{p1, p2}
    {}

    void append(const point& p)
    {
        points.push_back(p);
    }

    point front() const
    {
        return points.front();
    }

    point back() const
    {
        return points.back();
    }

    double length() const;


    std::vector<point> points;
};

inline bool operator==(const multiline& line1, const multiline& line2)
{
    return line1.points == line2.points;
}

inline bool operator!=(const multiline& line1, const multiline& line2)
{
    return !(line1 == line2);
}

inline std::ostream& operator<<(std::ostream& os, const multiline& line)
{
    os << '[';
    if (!line.points.empty()) {
        os << line.points[0];
        for (int i = 1; i < line.points.size(); i++) {
            os << ", " << line.points[i];
        }
    }
    os << ']';
    return os;
}

#endif //GEOMETRY_MULTILINE_HPP
