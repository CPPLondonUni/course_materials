//
// Created by Tristan Brindle on 24/10/2017.
//

#include "multiline.hpp"

#include <cmath>

namespace {

double line_segment_length(const point& p1, const point& p2)
{
    const auto x_dist = p1.x - p2.x;
    const auto y_dist = p1.y - p2.y;

    return std::hypot(x_dist, y_dist);
    // or std::sqrt(x_dist * x_dist, y_dist * y_dist);
}

}


double multiline::length() const
{
    double total_length = 0.0;

    for (int i = 1; i < points.size(); ++i) {
        total_length += line_segment_length(points[i], points[i - 1]);
    }

    return total_length;
}