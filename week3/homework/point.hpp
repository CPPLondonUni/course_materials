//
// Created by Tristan Brindle on 17/10/2017.
//

#ifndef GEOMETRY_POINT_HPP
#define GEOMETRY_POINT_HPP

#include <iostream>

struct point {
    bool equal_to(const point& other) const;

    bool not_equal_to(const point& other) const
    {
        return !equal_to(other);
    }

    int x = 0;
    int y = 0;
};

inline bool operator==(const point& p, const point& q)
{
    return p.x == q.x && p.y == q.y;
}

inline bool operator!=(const point& p, const point& q)
{
    return !(p == q);
}

inline point operator+(const point& p, const point& q)
{
    return point{p.x + q.x, p.y + q.y};
}

inline point operator-(const point& p, const point& q)
{
    return point{p.x - q.x, p.y - q.y};
}

inline point& operator+=(point& p, const point& q)
{
    p.x += q.x;
    p.y += q.y;
    return p;
}

inline point& operator-=(point& p, const point& q)
{
    p.x -= q.x;
    p.y -= q.y;
    return p;
}

std::ostream& operator<<(std::ostream& os, const point& p);

#endif //GEOMETRY_POINT_HPP
