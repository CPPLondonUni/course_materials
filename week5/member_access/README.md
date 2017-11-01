
# C++ London University Session 5 #

## Member access exercise ##

The file `student.hpp` contains the definition of a simple `student` class.

It is common in object-orientated code to use *accessor functions* to access
member variables. Your goal is to modify the `student` class to increase its
*encapsulation*.

Tasks:
 
1. Add a constructor taking `first`, `last` and `id` variables. Assign
    these to the class's member variables using a *member initializer list*.
    
2. Add a member function `get_first_name()` which returns the `first_name` field
   of `student`. What should the return type of this function be? Why?
   
3. Add a `set_first_name()` member function to allow modifying the first_name field.
   
4. In `set_first_name()`, ensure that the name saved in the member variable begins
   with a capital letter, followed by all lower case letters (hint: look up
   the `std::toupper()` and `tolower()` functions)
   
5. Add accessor functions for the `last_name` and `id` fields.

6. Make `student` a `class` rather than a `struct`. Set the access levels of its
   member functions/variables appropriately.
   
7. How can we make the output stream function work properly again?


