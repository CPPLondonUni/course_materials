//
// Created by Tristan Brindle on 17/10/2017.
//

#include "point.hpp"

bool point::equal_to(const point& other) const
{
    return x == other.x && y == other.y;
}
