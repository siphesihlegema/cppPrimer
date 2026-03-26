// now we properly learn vector

// A vector is a class template.
// Templates are not themselves functions or classes.
// they can be thought of as instructions to the compiler for generating classes or functions.
// The process that the compiler uses to create classes or functions from templates is called instantiation.

#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> intvec;
    intvec = {1,2,3};

    std::vector<std::vector<int>>  strvec;
    std::string str("Hello");
    strvec = {intvec};
}
