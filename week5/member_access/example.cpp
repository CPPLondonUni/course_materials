//
// Created by Tristan Brindle on 01/11/2017.
//

#include "example.hpp"

std::ostream& operator<<(std::ostream& os, const student& s)
{
    os << "First name: " << s.first_name << '\n'
       << "Last name: " << s.last_name << '\n'
       << "ID number: " << s.id_number << '\n';
    return os;
}

