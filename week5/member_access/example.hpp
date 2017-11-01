//
// Created by Tristan Brindle on 01/11/2017.
//

#ifndef MEMBER_ACCESS_EXAMPLE_HPP
#define MEMBER_ACCESS_EXAMPLE_HPP

#include <iostream>
#include <string>

struct student {
    std::string first_name;
    std::string last_name;
    int id_number;
};

std::ostream& operator<<(std::ostream& os, const student& s);

#endif //MEMBER_ACCESS_EXAMPLE_HPP
