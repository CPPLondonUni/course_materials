//
// Created by Tristan Brindle on 17/10/2017.
//

#ifndef GEOMETRY_POINT_HPP
#define GEOMETRY_POINT_HPP

struct point {
    bool equal_to(const point& other) const;

    bool not_equal_to(const point& other) const
    {
        return !equal_to(other);
    }

    int x = 0;
    int y = 0;
};


#endif //GEOMETRY_POINT_HPP
