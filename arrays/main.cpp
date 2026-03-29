#include <iostream>
#include <string>

/*
 * Arrays are a compound type
*/

int main() {
    constexpr int N(42);
    int arr[10];
    int *parr[N]; // array of 42 pointers to int
    
    // we can explitly initialise array elements
    const int size = 5;
    int arr2[size] = {1, 2, 3, 4, 5};
    char arr3[] = {'q', 'w', 'e', 'r', 't', 'y'};

    // char arrays are special
    char a1[] = {'C', '+', '+'}; // char array initialization with no null terminator at end
    char a2[4] = "C++"; // char array initialization with null terminator at end

    for(auto i: a2) {
        std::cout << i << '\n';
        std::cout << "#" << '\n';
    }

    // No copy assignment.
    
    // we can have an array or pointers but not refferences.
    std::string *strptr[10];

    int (*ptrarr) [10] = &arr; // points to an array of ten ints
    int (&arrRef)[10] = arr; // arrRef refers to an array of ten ints
    
    // Now this is crazu notation
    int *(&arry)[42] = parr; // arry is a reference to an array of ten pointers
}
