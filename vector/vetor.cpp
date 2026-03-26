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
    
    std::vector<int> ivec (10, 10);

    // value Initialization
    std::vector<int> ints(10); // ints is a vector initialised with 10, 0 integers.
    std::vector<std::string> strings(5); // five empty strings

    // addiing ellements to a vector
    std::vector<int> v1;
    for(int i{}; i != 100; ++i) {
        v1.push_back(i);
    }

    std::cout << v1.size() << "\n";
}
